#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57590);

#define public_6f575a3 _public_6f575a3
#define public_6f575b0 _public_6f575b0
#define public_6f575d1 _public_6f575d1
#define public_6f575dd _public_6f575dd
#define public_6f575e2 _public_6f575e2
#define public_6f575e7 _public_6f575e7
#define public_6f575ed _public_6f575ed

PROC_DECLARE(0x6f57590, internal_6f57590, public_6f57590);
extern "C" NAKED register_t __cdecl internal_6f57590()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp byte ptr ds : [esi], 0
        push edi
        je public_6f575a3
        mov al, byte ptr ds : [esi+1]
        test al, al
        jne public_6f575b0
/*FIXUP public_6f575a3 : nop
        push offset public_6f61cd4 @0x6f575a3*/
  FIXUP public_6f575a3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61cd4
        call public_6f4c7f0
        add esp, 4
        public_6f575b0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi]
        cmp byte ptr ds : [eax], cl
        jne public_6f575e7
        movsx esi, byte ptr ds : [esi+1]
        movsx ebx, cl
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        inc eax
        cmp eax, edx
        mov edi, 1
        jae public_6f575e7
        public_6f575d1 : nop
        movsx ecx, byte ptr ds : [eax]
        cmp ecx, esi
        jne public_6f575dd
        dec edi
        je public_6f575ed
        jmp public_6f575e2
        public_6f575dd : nop
        cmp ecx, ebx
        jne public_6f575e2
        inc edi
        public_6f575e2 : nop
        inc eax
        cmp eax, edx
        jb public_6f575d1
        public_6f575e7 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        public_6f575ed : nop
        pop edi
        pop esi
        inc eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f57590)
    }
}

#undef public_6f575a3
#undef public_6f575b0
#undef public_6f575d1
#undef public_6f575dd
#undef public_6f575e2
#undef public_6f575e7
#undef public_6f575ed
