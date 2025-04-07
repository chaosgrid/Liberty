#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d04480);
CLANG_FORWARD_PROC_SYMBOL(public_6d048f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d04ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6d050a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d05110);
CLANG_FORWARD_PROC_SYMBOL(public_6d051d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d05360);
CLANG_FORWARD_PROC_SYMBOL(public_6d05580);
CLANG_FORWARD_PROC_SYMBOL(public_6d05690);
CLANG_FORWARD_PROC_SYMBOL(public_6d058a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_JUMP_SYMBOL(public_6d610e8);

#define public_6d044c0 _public_6d044c0
#define public_6d044e0 _public_6d044e0
#define public_6d04572 _public_6d04572
#define public_6d04596 _public_6d04596
#define public_6d045ea _public_6d045ea
#define public_6d04602 _public_6d04602
#define public_6d04610 _public_6d04610
#define public_6d04628 _public_6d04628
#define public_6d04633 _public_6d04633
#define public_6d04640 _public_6d04640
#define public_6d0464a _public_6d0464a
#define public_6d04651 _public_6d04651
#define public_6d04665 _public_6d04665
#define public_6d04673 _public_6d04673
#define public_6d0467e _public_6d0467e
#define public_6d04686 _public_6d04686
#define public_6d04690 _public_6d04690
#define public_6d04697 _public_6d04697
#define public_6d0469f _public_6d0469f

PROC_DECLARE(0x6d04480, internal_6d04480, public_6d04480);
extern "C" NAKED register_t __cdecl internal_6d04480()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d610e8 @0x6d04482*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d610e8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x68
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        push edi
        mov dword ptr ss : [esp+0x10], esi
        call dword ptr ds : [public_6d64650]
        mov edi, eax
        xor ebx, ebx
        cmp edi, ebx
        je public_6d04602
        push ebp
        lea ebp, ds:[esi+4]
        lea esp, ss:[esp]
        public_6d044c0 : nop
        push edi
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebp
        call public_6d15d10
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, eax
        je public_6d044e0
        lea esi, ds:[ecx+0x10]
        jmp public_6d045ea
        public_6d044e0 : nop
        lea ecx, ss:[esp+0x12]
        push ecx
        lea edx, ss:[esp+0x17]
        push edx
        lea ecx, ss:[esp+0x44]
        call public_6d050a0
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], 0xFA
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x84], ebx
        mov dword ptr ss : [esp+0x54], eax
        call public_6d05360
        lea edx, ss:[esp+0x50]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, ebp
        mov byte ptr ss : [esp+0x88], 1
        call public_6d05690
        lea ecx, ss:[esp+0x54]
        mov byte ptr ss : [esp+0x80], bl
        call public_6d048f0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x84], 2
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ecx
        mov esi, ecx
        je public_6d04596
        public_6d04572 : nop
        mov eax, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x15C]
        push ebx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6d051d0
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, esi
        jne public_6d04572
        public_6d04596 : nop
        lea ecx, ss:[esp+0x3C]
        call public_6d05580
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x80], 0xFFFFFFFF
        call public_6d05110
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x14]
        lea esi, ds:[ecx+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [public_6d6464c]
        cmp eax, ebx
        je public_6d045ea
        mov ecx, eax
        mov dword ptr ds : [esi], eax
        call dword ptr ds : [public_6d64648]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [esi+0xC], ecx
        mov edx, dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [esi+4], edx
        public_6d045ea : nop
        push edi
        mov ecx, esi
        call public_6d04ab0
        mov edi, dword ptr ds : [edi+0x10]
        cmp edi, ebx
        mov esi, dword ptr ss : [esp+0x14]
        jne public_6d044c0
        pop ebp
        public_6d04602 : nop
        mov edi, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6d0469f
        nop 
        public_6d04610 : nop
        cmp dword ptr ds : [esi+0x30], ebx
        mov eax, dword ptr ds : [esi+8]
        jne public_6d04665
        cmp byte ptr ds : [eax+0x35], bl
        mov ecx, esi
        jne public_6d04633
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        cmp byte ptr ds : [eax+0x35], bl
        jne public_6d04651
        public_6d04628 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        cmp byte ptr ds : [eax+0x35], bl
        je public_6d04628
        jmp public_6d04651
        public_6d04633 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d0464a
        nop 
        lea esp, ss:[esp]
        public_6d04640 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6d04640
        public_6d0464a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6d04651
        mov esi, eax
        public_6d04651 : nop
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x20]
        push eax
        add ecx, 4
        call public_6d058a0
        jmp public_6d04697
        public_6d04665 : nop
        cmp byte ptr ds : [eax+0x35], bl
        jne public_6d0467e
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        cmp byte ptr ds : [eax+0x35], bl
        jne public_6d04697
        public_6d04673 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        cmp byte ptr ds : [eax+0x35], bl
        je public_6d04673
        jmp public_6d04697
        public_6d0467e : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d04690
        public_6d04686 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6d04686
        public_6d04690 : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6d04697
        mov esi, eax
        public_6d04697 : nop
        cmp esi, edi
        jne public_6d04610
        public_6d0469f : nop
        mov ecx, dword ptr ss : [esp+0x74]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x74
        ret 
        UNREACHABLE_TRAP(0x6d04480)
    }
}

#undef public_6d044c0
#undef public_6d044e0
#undef public_6d04572
#undef public_6d04596
#undef public_6d045ea
#undef public_6d04602
#undef public_6d04610
#undef public_6d04628
#undef public_6d04633
#undef public_6d04640
#undef public_6d0464a
#undef public_6d04651
#undef public_6d04665
#undef public_6d04673
#undef public_6d0467e
#undef public_6d04686
#undef public_6d04690
#undef public_6d04697
#undef public_6d0469f
