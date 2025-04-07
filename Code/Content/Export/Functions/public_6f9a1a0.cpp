#include "Content-PCH.h"


#define public_6f9a1df _public_6f9a1df
#define public_6f9a1fc _public_6f9a1fc
#define public_6f9a219 _public_6f9a219
#define public_6f9a236 _public_6f9a236
#define public_6f9a253 _public_6f9a253
#define public_6f9a25d _public_6f9a25d

PROC_DECLARE(0x6f9a1a0, internal_6f9a1a0, public_6f9a1a0);
extern "C" NAKED register_t __cdecl internal_6f9a1a0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        mov cl, byte ptr ss : [esp+0x10]
        push esi
        xor al, al
        test cl, cl
        push edi
        je public_6f9a25d
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [public_6fb3000]
/*FIXUP push offset public_6fbcfdc @0x6f9a1be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcfdc
        mov bl, 1
        lea esi, ds:[eax+4]
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9a1df
        pop edi
        pop esi
        mov byte ptr ss : [ebp+4], bl
        pop ebp
        mov al, bl
        pop ebx
        ret 8
/*FIXUP public_6f9a1df : nop
        push offset public_6fbcfc4 @0x6f9a1df*/
  FIXUP public_6f9a1df : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcfc4
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9a1fc
        pop edi
        pop esi
        mov byte ptr ss : [ebp+5], 1
        pop ebp
        mov al, bl
        pop ebx
        ret 8
/*FIXUP public_6f9a1fc : nop
        push offset public_6fbcfb0 @0x6f9a1fc*/
  FIXUP public_6f9a1fc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcfb0
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9a219
        pop edi
        pop esi
        mov byte ptr ss : [ebp+6], 1
        pop ebp
        mov al, bl
        pop ebx
        ret 8
/*FIXUP public_6f9a219 : nop
        push offset public_6fbcf98 @0x6f9a219*/
  FIXUP public_6f9a219 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcf98
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9a236
        pop edi
        pop esi
        mov byte ptr ss : [ebp+7], 1
        pop ebp
        mov al, bl
        pop ebx
        ret 8
/*FIXUP public_6f9a236 : nop
        push offset public_6fbcf84 @0x6f9a236*/
  FIXUP public_6f9a236 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcf84
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9a253
        pop edi
        pop esi
        mov byte ptr ss : [ebp+8], 1
        pop ebp
        mov al, bl
        pop ebx
        ret 8
        public_6f9a253 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3050]
        xor al, al
        public_6f9a25d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f9a1a0)
    }
}

#undef public_6f9a1df
#undef public_6f9a1fc
#undef public_6f9a219
#undef public_6f9a236
#undef public_6f9a253
#undef public_6f9a25d
