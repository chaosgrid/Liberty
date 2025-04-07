#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b1870);
CLANG_FORWARD_PROC_SYMBOL(public_62ecaf0);

#define public_62cbec2 _public_62cbec2
#define public_62cbee9 _public_62cbee9
#define public_62cbf37 _public_62cbf37
#define public_62cbf39 _public_62cbf39
#define public_62cbf42 _public_62cbf42
#define public_62cbf62 _public_62cbf62
#define public_62cbfae _public_62cbfae

PROC_DECLARE(0x62cbea0, internal_62cbea0, public_62cbea0);
extern "C" NAKED register_t __cdecl internal_62cbea0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x282]
        test al, al
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        je public_62cbec2
        mov ecx, dword ptr ds : [esi+0x278]
        test ecx, ecx
        je public_62cbec2
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x58]
        public_62cbec2 : nop
        cmp dword ptr ds : [edi], 4
        jne public_62cbfae
        mov ecx, dword ptr ds : [esi+0x24]
        mov edi, dword ptr ds : [edi+4]
        add ecx, 0x1364
        call public_62ecaf0
        mov ecx, eax
        xor eax, eax
        test ecx, ecx
        je public_62cbee9
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        public_62cbee9 : nop
        cmp byte ptr ds : [edi], 0
        jne public_62cbf62
        cmp eax, dword ptr ds : [edi+0xC]
        jne public_62cbf62
        mov al, byte ptr ds : [edi+1]
        test al, al
        je public_62cbf62
        mov ecx, dword ptr ds : [esi+0x14]
        lea edx, ss:[esp+0xC]
        mov byte ptr ss : [esp+0xC], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x134]
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        je public_62cbf42
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_62cbf37
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_62cbf39
        public_62cbf37 : nop
        xor eax, eax
        public_62cbf39 : nop
        mov ecx, eax
        call public_62b1870
        jmp public_62cbf62
        public_62cbf42 : nop
        mov al, byte ptr ds : [esi+0x282]
        test al, al
        je public_62cbf62
        mov ecx, dword ptr ds : [esi+0x278]
        test ecx, ecx
        je public_62cbf62
        mov byte ptr ds : [esi+0x282], 0
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        public_62cbf62 : nop
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        cmp eax, dword ptr ds : [edi+0xC]
        jne public_62cbfae
        cmp byte ptr ds : [edi], 0
        jne public_62cbfae
        mov al, byte ptr ds : [esi+0x282]
        test al, al
        mov byte ptr ds : [esi+0x280], 1
        jne public_62cbfae
        mov esi, dword ptr ds : [esi+0x14]
        push 0
        lea edx, ss:[esp+0x10]
        lea ecx, ds:[esi+4]
        push edx
        mov dword ptr ss : [esp+0x14], 0
        mov eax, dword ptr ds : [ecx]
        push 2
        call dword ptr ds : [eax+0x60]
        public_62cbfae : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62cbea0)
    }
}

#undef public_62cbec2
#undef public_62cbee9
#undef public_62cbf37
#undef public_62cbf39
#undef public_62cbf42
#undef public_62cbf62
#undef public_62cbfae
