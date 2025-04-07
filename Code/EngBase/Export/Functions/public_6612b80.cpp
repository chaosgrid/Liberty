#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612b20);
CLANG_FORWARD_PROC_SYMBOL(public_6612b80);
CLANG_FORWARD_PROC_SYMBOL(public_6614290);
CLANG_FORWARD_PROC_SYMBOL(public_6628190);

#define public_6612ba2 _public_6612ba2
#define public_6612bc0 _public_6612bc0
#define public_6612c01 _public_6612c01
#define public_6612c09 _public_6612c09
#define public_6612c16 _public_6612c16
#define public_6612c38 _public_6612c38
#define public_6612c3f _public_6612c3f
#define public_6612c50 _public_6612c50

PROC_DECLARE(0x6612b80, internal_6612b80, public_6612b80);
extern "C" NAKED register_t __cdecl internal_6612b80()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ds : [public_662ace0]
        push ebx
        mov ebx, dword ptr ds : [ecx+0xC]
        push esi
        mov esi, dword ptr ds : [ecx+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0xC], esi
        jne public_6612ba2
        call public_6628190
        mov dword ptr ds : [public_662ace0], eax
        public_6612ba2 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        cmp ebx, esi
        jae public_6612c50
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        push edi
        public_6612bc0 : nop
        mov esi, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        mov ecx, esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x24]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, 1
        jne public_6612c3f
        push esi
        mov ecx, ebp
        call public_6614290
        mov edi, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x30], eax
        cmp eax, edi
        je public_6612c01
        add eax, 0xC
        mov ecx, esi
        push eax
        call public_6612b20
        test al, al
        jne public_6612c01
        lea eax, ss:[esp+0x30]
        jmp public_6612c09
        public_6612c01 : nop
        mov dword ptr ss : [esp+0x10], edi
        lea eax, ss:[esp+0x10]
        public_6612c09 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        je public_6612c3f
        mov eax, dword ptr ds : [eax+0x1C]
        test eax, eax
        je public_6612c3f
        public_6612c16 : nop
        cmp dword ptr ds : [eax+4], 2
        jne public_6612c38
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+0x24], edx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+0x28], ecx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+0x2C], edx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+0x30], ecx
        public_6612c38 : nop
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        jne public_6612c16
        public_6612c3f : nop
        mov eax, dword ptr ss : [esp+0x14]
        add ebx, 4
        cmp ebx, eax
        jb public_6612bc0
        pop edi
        pop ebp
        public_6612c50 : nop
        pop esi
        pop ebx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6612b80)
    }
}

#undef public_6612ba2
#undef public_6612bc0
#undef public_6612c01
#undef public_6612c09
#undef public_6612c16
#undef public_6612c38
#undef public_6612c3f
#undef public_6612c50
