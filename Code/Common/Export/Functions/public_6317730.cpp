#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6316580);
CLANG_FORWARD_PROC_SYMBOL(public_6317350);
CLANG_FORWARD_PROC_SYMBOL(public_6317730);
CLANG_FORWARD_PROC_SYMBOL(public_6318b10);
CLANG_FORWARD_PROC_SYMBOL(public_6319b80);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6317760 _public_6317760
#define public_6317787 _public_6317787
#define public_63177b3 _public_63177b3
#define public_63177b7 _public_63177b7
#define public_63177d7 _public_63177d7

PROC_DECLARE(0x6317730, internal_6317730, public_6317730);
extern "C" NAKED register_t __cdecl internal_6317730()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        je public_63177b3
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_63177b3
        cmp ebx, eax
        jne public_63177b3
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6317787
        lea esp, ss:[esp]
        public_6317760 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6318b10
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_6316580
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6317760
        public_6317787 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        public_63177b3 : nop
        cmp ecx, ebx
        je public_63177d7
        public_63177b7 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6319b80
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6317350
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_63177b7
        public_63177d7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6317730)
    }
}

#undef public_6317760
#undef public_6317787
#undef public_63177b3
#undef public_63177b7
#undef public_63177d7
