#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f1000);
CLANG_FORWARD_PROC_SYMBOL(public_66f6ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6700710);
CLANG_FORWARD_PROC_SYMBOL(public_670071b);

#define public_66f6ed7 _public_66f6ed7
#define public_66f6ef6 _public_66f6ef6
#define public_66f6f03 _public_66f6f03
#define public_66f6f29 _public_66f6f29

PROC_DECLARE(0x66f6ec0, internal_66f6ec0, public_66f6ec0);
extern "C" NAKED register_t __cdecl internal_66f6ec0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x1C]
        xor ebx, ebx
        xor ebp, ebp
        cmp eax, ebx
        mov dword ptr ds : [edi], offset public_6701428
        jbe public_66f6f03
        public_66f6ed7 : nop
        mov esi, dword ptr ds : [edi+0x18]
        mov eax, dword ptr ds : [esi+ebx+4]
        mov ecx, dword ptr ds : [edi+8]
        add esi, ebx
        cmp eax, 0xFFFFFFFF
        je public_66f6ef6
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        public_66f6ef6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        inc ebp
        add ebx, 0x2C
        cmp ebp, eax
        jb public_66f6ed7
        xor ebx, ebx
        public_66f6f03 : nop
        mov eax, dword ptr ds : [edi+0x18]
        cmp eax, ebx
        je public_66f6f29
        mov ecx, dword ptr ds : [eax-4]
        lea esi, ds:[eax-4]
/*FIXUP push offset _public_66f1000 @0x66f6f10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f1000
        push ecx
        push 0x2C
        push eax
        call public_670071b
        push esi
        call public_6700710
        add esp, 4
        xor ebx, ebx
        public_66f6f29 : nop
        mov edx, dword ptr ds : [edi+0x14]
        push edx
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0xC], ebx
        call public_6700710
        add esp, 4
        mov dword ptr ds : [edi+0x14], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x66f6ec0)
    }
}

#undef public_66f6ed7
#undef public_66f6ef6
#undef public_66f6f03
#undef public_66f6f29
