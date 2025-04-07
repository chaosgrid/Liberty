#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e74a0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62cedf7 _public_62cedf7
#define public_62cedf9 _public_62cedf9
#define public_62cee05 _public_62cee05
#define public_62cee29 _public_62cee29

PROC_DECLARE(0x62cedd0, internal_62cedd0, public_62cedd0);
extern "C" NAKED register_t __cdecl internal_62cedd0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x24]
        push edi
        lea eax, ds:[ebx+0xC]
        push eax
        add ecx, 0x34
        call public_62e74a0
        test eax, eax
        lea edi, ds:[esi+0x174]
        je public_62cedf7
        add eax, 8
        jmp public_62cedf9
        public_62cedf7 : nop
        xor eax, eax
        public_62cedf9 : nop
        cmp eax, dword ptr ds : [edi]
        je public_62cee05
        push eax
        mov ecx, edi
        call public_6341610
        public_62cee05 : nop
        mov edi, dword ptr ds : [edi]
        test edi, edi
        je public_62cee29
        lea eax, ds:[edi-8]
        test eax, eax
        je public_62cee29
        mov cl, byte ptr ds : [esi+0x28]
        mov al, 1
        or cl, 2
        pop edi
        mov byte ptr ds : [esi+0x17C], al
        mov byte ptr ds : [esi+0x28], cl
        pop esi
        pop ebx
        ret 4
        public_62cee29 : nop
        mov al, byte ptr ds : [esi+0x28]
        mov cl, byte ptr ds : [ebx+0x10]
        and al, 0xFD
        pop edi
        mov byte ptr ds : [esi+0x28], al
        mov byte ptr ds : [esi+0x16C], cl
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62cedd0)
    }
}

#undef public_62cedf7
#undef public_62cedf9
#undef public_62cee05
#undef public_62cee29
