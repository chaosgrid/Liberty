#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d740);
CLANG_FORWARD_PROC_SYMBOL(public_534460);
CLANG_FORWARD_PROC_SYMBOL(public_5351d0);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_544880);
CLANG_FORWARD_PROC_SYMBOL(public_544e70);

#define public_544dc4 _public_544dc4
#define public_544dd0 _public_544dd0
#define public_544e11 _public_544e11
#define public_544e2d _public_544e2d
#define public_544e2f _public_544e2f

PROC_DECLARE(0x544d70, internal_544d70, public_544d70);
extern "C" NAKED register_t __cdecl internal_544d70()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        call public_42d740
        test al, al
        jne public_544dc4
        mov esi, dword ptr ss : [esp+0x4C]
        mov ecx, 0xA
        lea edi, ss:[esp+0x20]
        lea eax, ss:[esp+0x20]
        rep movsd
        push eax
        mov ecx, ebx
        call public_544e70
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, ebx
        call public_534460
        test al, al
        jne public_544dc4
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, 0x1C
        je public_544dd0
        cmp eax, 0xBB
        jne public_544dc4
        mov ecx, ebx
        call public_544880
        public_544dc4 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x38
        ret 4
        public_544dd0 : nop
        mov edx, dword ptr ss : [esp+0x30]
        push 0
        push edx
        call public_5416c0
        mov edi, eax
        add esp, 8
        test edi, edi
        je public_544dc4
        mov ecx, dword ptr ds : [public_673344]
        mov eax, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [ebx+4]
        push ecx
        lea esi, ds:[ebx+4]
        push eax
        push edi
        mov ecx, esi
        mov ebp, eax
        call dword ptr ds : [edx+0x48]
        push 0x80
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c64f4]
        add ebx, 0xC
        public_544e11 : nop
        test ebx, ebx
        je public_544e2d
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_544e2d
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_544e2f
        public_544e2d : nop
        xor eax, eax
        public_544e2f : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c64f0]
        test eax, eax
        je public_544dc4
        xor edx, edx
        mov dx, word ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_673344]
        push eax
        push ebp
        push edi
        lea ecx, ss:[esp+0x58]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x5C], edx
        call public_5351d0
        jmp public_544e11
        UNREACHABLE_TRAP(0x544d70)
    }
}

#undef public_544dc4
#undef public_544dd0
#undef public_544e11
#undef public_544e2d
#undef public_544e2f
