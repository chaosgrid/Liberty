#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_6290af0);
CLANG_FORWARD_PROC_SYMBOL(public_6291e10);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6291e31 _public_6291e31

PROC_DECLARE(0x6291e10, internal_6291e10, public_6291e10);
extern "C" NAKED register_t __cdecl internal_6291e10()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x4C
        mov eax, dword ptr ds : [public_63fc100]
        test eax, eax
        push ebx
        push esi
        push edi
        mov esi, ecx
        jne public_6291e31
        call public_6391cf0
        mov dword ptr ds : [public_63fc100], eax
        public_6291e31 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x38]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov ebx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+8]
        push ebx
        push eax
        lea edi, ds:[esi+8]
        push ecx
        mov ecx, edi
        call public_6290af0
        fld dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [ebp+0x10]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x40]
        push ebx
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x50]
        push edx
        lea eax, ss:[esp+0x18]
        fstp dword ptr ss : [esp+0x20]
        push eax
        lea ecx, ds:[esi+0xD8]
        call public_6290af0
        fld dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [ebp+0x10]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x44]
        push ebx
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x54]
        push ecx
        lea edx, ss:[esp+0x18]
        fstp dword ptr ss : [esp+0x20]
        push edx
        lea ecx, ds:[esi+0x1A8]
        call public_6290af0
        inc dword ptr ds : [esi+0x2B8]
        lea eax, ds:[esi+0x278]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x284]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+0xC4]
        mov dword ptr ds : [ecx+8], eax
        fld dword ptr ds : [edi+0xA4]
        fmul dword ptr ds : [public_639c13c]
        mov ecx, dword ptr ds : [esi+0xC0]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x1C], ecx
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x28]
        fld dword ptr ds : [edi+0xA0]
        mov dword ptr ss : [esp+0x20], edx
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edi+0x9C]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld qword ptr ss : [esp+0x10]
        sub esp, 0xC
        fst dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+0x290]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x20]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [edi+0x78]
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp st(0)
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [edi+0x7C]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [edi+0x80]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        pop edi
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        fld qword ptr ds : [esi+0xC0]
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        fstp qword ptr ds : [esi+0x2C8]
        mov dword ptr ds : [esi+0x2C0], eax
        mov dword ptr ds : [esi+0x2C4], eax
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6291e10)
    }
}

#undef public_6291e31
