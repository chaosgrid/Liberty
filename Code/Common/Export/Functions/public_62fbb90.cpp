#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fbb90);

#define public_62fbba4 _public_62fbba4
#define public_62fbbb9 _public_62fbbb9
#define public_62fbbc1 _public_62fbbc1
#define public_62fbbca _public_62fbbca

PROC_DECLARE(0x62fbb90, internal_62fbb90, public_62fbb90);
extern "C" NAKED register_t __cdecl internal_62fbb90()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        xor edi, edi
        test ebx, ebx
        jbe public_62fbbc1
        mov ebp, dword ptr ss : [esp+0x14]
        mov esi, ecx
        public_62fbba4 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62fbbb9
        push eax
        push ebp
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        je public_62fbbca
        public_62fbbb9 : nop
        inc edi
        add esi, 8
        cmp edi, ebx
        jb public_62fbba4
        public_62fbbc1 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0xC
        public_62fbbca : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], eax
        mov al, 1
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62fbb90)
    }
}

#undef public_62fbba4
#undef public_62fbbb9
#undef public_62fbbc1
#undef public_62fbbca
