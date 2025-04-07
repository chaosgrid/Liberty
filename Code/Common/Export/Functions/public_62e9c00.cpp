#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e9c00);

#define public_62e9c14 _public_62e9c14
#define public_62e9c25 _public_62e9c25
#define public_62e9c27 _public_62e9c27
#define public_62e9c4d _public_62e9c4d

PROC_DECLARE(0x62e9c00, internal_62e9c00, public_62e9c00);
extern "C" NAKED register_t __cdecl internal_62e9c00()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x830]
        push edi
        xor edi, edi
        test eax, eax
        jbe public_62e9c4d
        push ebx
        lea ebx, ds:[esi+0x30]
        public_62e9c14 : nop
        mov eax, dword ptr ds : [esi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e9c25
        add eax, 0xFFFFFFF8
        jmp public_62e9c27
        public_62e9c25 : nop
        xor eax, eax
        public_62e9c27 : nop
        xor edx, edx
        mov dx, word ptr ds : [public_63a4aa4]
        push 0xFFFFFFFF
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        push 0
        push ebx
        call dword ptr ds : [eax+0x44]
        mov eax, dword ptr ds : [esi+0x830]
        inc edi
        add ebx, 0x20
        cmp edi, eax
        jb public_62e9c14
        pop ebx
        public_62e9c4d : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62e9c00)
    }
}

#undef public_62e9c14
#undef public_62e9c25
#undef public_62e9c27
#undef public_62e9c4d
