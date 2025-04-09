#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421ba0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_561f20);
CLANG_FORWARD_PROC_SYMBOL(public_57ab10);

#define public_58ec57 _public_58ec57
#define public_58ec62 _public_58ec62
#define public_58ecab _public_58ecab
#define public_58ecdf _public_58ecdf
#define public_58ece4 _public_58ece4
#define public_58ed54 _public_58ed54
#define public_58ed5f _public_58ed5f
#define public_58eda8 _public_58eda8
#define public_58eddc _public_58eddc
#define public_58ede1 _public_58ede1
#define public_58eed8 _public_58eed8
#define public_58ef17 _public_58ef17
#define public_58ef47 _public_58ef47
#define public_58ef81 _public_58ef81
#define public_58ef86 _public_58ef86
#define public_58efa4 _public_58efa4
#define public_58eff9 _public_58eff9
#define public_58efff _public_58efff
#define public_58f028 _public_58f028
#define public_58f031 _public_58f031
#define public_58f07e _public_58f07e
#define public_58f0c6 _public_58f0c6
#define public_58f0d2 _public_58f0d2
#define public_58f0e0 _public_58f0e0
#define public_58f102 _public_58f102
#define public_58f167 _public_58f167
#define public_58f172 _public_58f172
#define public_58f1ba _public_58f1ba
#define public_58f1ff _public_58f1ff

PROC_DECLARE(0x58eb30, internal_58eb30, public_58eb30);
extern "C" NAKED register_t __cdecl internal_58eb30()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov esi, ecx
        lea edi, ds:[esi+0x3C]
        push edi
        push 0
        call public_422690
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        push 0
        push 7
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 5
        push 0x13
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 6
        push 0x14
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x1B
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov al, byte ptr ds : [esi+0x554]
        test al, al
        je public_58ede1
        mov al, byte ptr ds : [esi+0x4D8]
        test al, al
        je public_58ece4
        lea edx, ds:[esi+0x4F4]
        push edx
        call public_421ba0
        push 8
        call public_421670
        mov eax, dword ptr ds : [esi+0x4DC]
        mov ecx, dword ptr ds : [esi+0x4A4]
        mov edx, dword ptr ds : [ecx+eax*4]
        mov eax, dword ptr ds : [esi+0x4B4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push ecx
        call public_421cc0
        mov edx, dword ptr ds : [esi+0x4DC]
        mov eax, dword ptr ds : [esi+0x4A4]
        mov ecx, dword ptr ds : [eax+edx*4]
        mov edx, dword ptr ds : [esi+0x488]
        push 0
        push ecx
        push edx
        call public_421cc0
        mov ecx, dword ptr ds : [esi+0x4A4]
        add esp, 0x20
        test ecx, ecx
        jne public_58ec57
        xor eax, eax
        jmp public_58ec62
        public_58ec57 : nop
        mov eax, dword ptr ds : [esi+0x4A8]
        sub eax, ecx
        sar eax, 2
        public_58ec62 : nop
        mov ecx, dword ptr ds : [esi+0x4DC]
        mov edx, dword ptr ds : [esi+0x488]
        inc ecx
        cmp ecx, eax
        push 0
        jae public_58ecab
        mov eax, dword ptr ds : [esi+0x4A4]
        mov ecx, dword ptr ds : [eax+ecx*4]
        push ecx
        push edx
        call public_421cc0
        mov eax, dword ptr ds : [esi+0x4DC]
        mov ecx, dword ptr ds : [esi+0x4A4]
        mov edx, dword ptr ds : [ecx+eax*4+4]
        mov eax, dword ptr ds : [esi+0x4B4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push ecx
        call public_421cc0
        add esp, 0x18
        jmp public_58ecdf
        public_58ecab : nop
        fld dword ptr ds : [esi+0x48C]
        push ecx
        fchs 
        fstp dword ptr ss : [esp]
        push edx
        call public_421cc0
        fld dword ptr ds : [esi+0x48C]
        mov eax, dword ptr ds : [esi+0x4B4]
        fchs 
        add esp, 0xC
        push 0
        push ecx
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        push ecx
        call public_421cc0
        add esp, 0xC
        public_58ecdf : nop
        call public_421690
        public_58ece4 : nop
        mov al, byte ptr ds : [esi+0x4E8]
        test al, al
        je public_58ede1
        lea edx, ds:[esi+0x4F8]
        push edx
        call public_421ba0
        push 8
        call public_421670
        mov eax, dword ptr ds : [esi+0x4EC]
        mov ecx, dword ptr ds : [esi+0x4A4]
        mov edx, dword ptr ds : [ecx+eax*4]
        mov eax, dword ptr ds : [esi+0x4B4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push ecx
        call public_421cc0
        mov edx, dword ptr ds : [esi+0x4EC]
        mov eax, dword ptr ds : [esi+0x4A4]
        mov ecx, dword ptr ds : [eax+edx*4]
        mov edx, dword ptr ds : [esi+0x488]
        push 0
        push ecx
        push edx
        call public_421cc0
        mov ecx, dword ptr ds : [esi+0x4A4]
        add esp, 0x20
        test ecx, ecx
        jne public_58ed54
        xor eax, eax
        jmp public_58ed5f
        public_58ed54 : nop
        mov eax, dword ptr ds : [esi+0x4A8]
        sub eax, ecx
        sar eax, 2
        public_58ed5f : nop
        mov ecx, dword ptr ds : [esi+0x4EC]
        mov edx, dword ptr ds : [esi+0x488]
        inc ecx
        cmp ecx, eax
        push 0
        jae public_58eda8
        mov eax, dword ptr ds : [esi+0x4A4]
        mov ecx, dword ptr ds : [eax+ecx*4]
        push ecx
        push edx
        call public_421cc0
        mov eax, dword ptr ds : [esi+0x4EC]
        mov ecx, dword ptr ds : [esi+0x4A4]
        mov edx, dword ptr ds : [ecx+eax*4+4]
        mov eax, dword ptr ds : [esi+0x4B4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push ecx
        call public_421cc0
        add esp, 0x18
        jmp public_58eddc
        public_58eda8 : nop
        fld dword ptr ds : [esi+0x48C]
        push ecx
        fchs 
        fstp dword ptr ss : [esp]
        push edx
        call public_421cc0
        fld dword ptr ds : [esi+0x48C]
        mov eax, dword ptr ds : [esi+0x4B4]
        fchs 
        add esp, 0xC
        push 0
        push ecx
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        push ecx
        call public_421cc0
        add esp, 0xC
        public_58eddc : nop
        call public_421690
        public_58ede1 : nop
        mov ecx, esi
        call public_57ab10
        push edi
        push 0
        call public_422690
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        push 0
        push 7
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 5
        push 0x13
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 6
        push 0x14
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x1B
        push eax
        call dword ptr ds : [ecx+0xF0]
        lea edx, ds:[esi+0x4F0]
        push edx
        call public_421ba0
        mov al, byte ptr ds : [esi+0x54F]
        add esp, 4
        test al, al
        je public_58ef86
        push 2
        call public_421670
        mov al, byte ptr ds : [esi+0x550]
        add esp, 4
        test al, al
        je public_58eed8
        push 0
        push 0
        push 0
        call public_421cc0
        mov eax, dword ptr ds : [esi+0x488]
        push 0
        push 0
        push eax
        call public_421cc0
        add esp, 0x18
        public_58eed8 : nop
        mov al, byte ptr ds : [esi+0x551]
        test al, al
        je public_58ef17
        fld dword ptr ds : [esi+0x48C]
        push 0
        push ecx
        fchs 
        fstp dword ptr ss : [esp]
        push 0
        call public_421cc0
        fld dword ptr ds : [esi+0x48C]
        add esp, 0xC
        fchs 
        push 0
        push ecx
        mov ecx, dword ptr ds : [esi+0x488]
        fstp dword ptr ss : [esp]
        push ecx
        call public_421cc0
        add esp, 0xC
        public_58ef17 : nop
        mov al, byte ptr ds : [esi+0x552]
        test al, al
        je public_58ef47
        push 0
        push 0
        push 0
        call public_421cc0
        fld dword ptr ds : [esi+0x48C]
        add esp, 0xC
        fchs 
        push 0
        push ecx
        fstp dword ptr ss : [esp]
        push 0
        call public_421cc0
        add esp, 0xC
        public_58ef47 : nop
        mov al, byte ptr ds : [esi+0x553]
        test al, al
        je public_58ef81
        mov edx, dword ptr ds : [esi+0x488]
        push 0
        push 0
        push edx
        call public_421cc0
        fld dword ptr ds : [esi+0x48C]
        mov eax, dword ptr ds : [esi+0x488]
        fchs 
        add esp, 0xC
        push 0
        push ecx
        fstp dword ptr ss : [esp]
        push eax
        call public_421cc0
        add esp, 0xC
        public_58ef81 : nop
        call public_421690
        public_58ef86 : nop
        push 2
        call public_421670
        mov al, byte ptr ds : [esi+0x54D]
        add esp, 4
        test al, al
        je public_58efff
        mov edi, 1
        mov ebx, 0xC
        public_58efa4 : nop
        mov ecx, dword ptr ds : [esi+0x4A4]
        test ecx, ecx
        je public_58efff
        mov eax, dword ptr ds : [esi+0x4A8]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_58efff
        mov ecx, dword ptr ds : [esi+0x4C4]
        mov al, byte ptr ds : [ecx+ebx+2]
        test al, al
        je public_58eff9
        mov edx, dword ptr ds : [esi+0x4A4]
        mov eax, dword ptr ds : [edx+edi*4]
        push 0
        push eax
        push 0
        call public_421cc0
        mov ecx, dword ptr ds : [esi+0x4A4]
        mov edx, dword ptr ds : [ecx+edi*4]
        mov eax, dword ptr ds : [esi+0x488]
        push 0
        push edx
        push eax
        call public_421cc0
        add esp, 0x18
        public_58eff9 : nop
        inc edi
        add ebx, 0xC
        jmp public_58efa4
        public_58efff : nop
        mov al, byte ptr ds : [esi+0x54E]
        test al, al
        je public_58f07e
        mov eax, dword ptr ds : [esi+0x558]
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0
        jbe public_58f028
        mov ecx, dword ptr ds : [esi+0x4A4]
        fld dword ptr ds : [ecx+eax*4]
        fstp dword ptr ss : [esp+0xC]
        public_58f028 : nop
        mov ebx, dword ptr ss : [esp+0xC]
        mov edi, 1
        public_58f031 : nop
        mov ecx, dword ptr ds : [esi+0x4B4]
        test ecx, ecx
        je public_58f07e
        mov eax, dword ptr ds : [esi+0x4B8]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_58f07e
        push 0
        mov edx, ecx
        mov eax, dword ptr ds : [edx+edi*4]
        push ebx
        push eax
        call public_421cc0
        fld dword ptr ds : [esi+0x48C]
        add esp, 0xC
        fchs 
        push 0
        push ecx
        mov ecx, dword ptr ds : [esi+0x4B4]
        fstp dword ptr ss : [esp]
        mov edx, dword ptr ds : [ecx+edi*4]
        push edx
        call public_421cc0
        add esp, 0xC
        inc edi
        jmp public_58f031
        public_58f07e : nop
        call public_421690
        mov al, byte ptr ds : [esi+0x554]
        test al, al
        jne public_58f1ff
        mov al, byte ptr ds : [esi+0x4E8]
        test al, al
        je public_58f1ff
        mov edi, dword ptr ds : [esi+0x4EC]
        mov ecx, dword ptr ds : [esi+0x4C4]
        lea eax, ds:[edi+edi*2]
        lea edx, ds:[ecx+eax*4]
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        push ebp
        mov ebp, edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_58f102
        test edi, edi
        jbe public_58f0d2
        lea eax, ds:[edx-8]
        public_58f0c6 : nop
        cmp dword ptr ds : [eax], ecx
        jne public_58f0d2
        dec edi
        sub eax, 0xC
        test edi, edi
        ja public_58f0c6
        public_58f0d2 : nop
        mov ebx, dword ptr ds : [esi+0x4A4]
        lea ecx, ss:[ebp+1]
        add edx, 0x10
        mov edi, edi
        public_58f0e0 : nop
        test ebx, ebx
        je public_58f102
        mov eax, dword ptr ds : [esi+0x4A8]
        sub eax, ebx
        sar eax, 2
        cmp ecx, eax
        jae public_58f102
        mov eax, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [edx], eax
        jne public_58f102
        inc ebp
        inc ecx
        add edx, 0xC
        jmp public_58f0e0
        public_58f102 : nop
        mov ecx, dword ptr ds : [public_679ba4]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        call public_561f20
        lea eax, ss:[esp+0x18]
        push eax
        call public_421ba0
        push 7
        call public_421670
        mov ecx, dword ptr ds : [esi+0x4A4]
        mov edx, dword ptr ds : [ecx+edi*4]
        mov eax, dword ptr ds : [esi+0x4B4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push ecx
        call public_421cc0
        mov edx, dword ptr ds : [esi+0x4A4]
        mov eax, dword ptr ds : [edx+edi*4]
        mov ecx, dword ptr ds : [esi+0x488]
        push 0
        push eax
        push ecx
        call public_421cc0
        mov ecx, dword ptr ds : [esi+0x4A4]
        add esp, 0x28
        test ecx, ecx
        jne public_58f167
        xor eax, eax
        jmp public_58f172
        public_58f167 : nop
        mov eax, dword ptr ds : [esi+0x4A8]
        sub eax, ecx
        sar eax, 2
        public_58f172 : nop
        lea edi, ss:[ebp+1]
        cmp edi, eax
        pop ebp
        push 0
        jae public_58f1ba
        mov edx, dword ptr ds : [esi+0x4A4]
        mov eax, dword ptr ds : [edx+edi*4]
        mov ecx, dword ptr ds : [esi+0x488]
        push eax
        push ecx
        call public_421cc0
        mov edx, dword ptr ds : [esi+0x4A4]
        mov eax, dword ptr ds : [edx+edi*4]
        mov ecx, dword ptr ds : [esi+0x4B4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push edx
        call public_421cc0
        add esp, 0x18
        pop edi
        pop esi
        pop ebx
        add esp, 4
        jmp public_421690
        public_58f1ba : nop
        fld dword ptr ds : [esi+0x48C]
        mov eax, dword ptr ds : [esi+0x488]
        push ecx
        fchs 
        fstp dword ptr ss : [esp]
        push eax
        call public_421cc0
        fld dword ptr ds : [esi+0x48C]
        add esp, 0xC
        fchs 
        push 0
        push ecx
        mov ecx, dword ptr ds : [esi+0x4B4]
        fstp dword ptr ss : [esp]
        mov edx, dword ptr ds : [ecx]
        push edx
        call public_421cc0
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        add esp, 4
        jmp public_421690
        public_58f1ff : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x58eb30)
    }
}

#undef public_58ec57
#undef public_58ec62
#undef public_58ecab
#undef public_58ecdf
#undef public_58ece4
#undef public_58ed54
#undef public_58ed5f
#undef public_58eda8
#undef public_58eddc
#undef public_58ede1
#undef public_58eed8
#undef public_58ef17
#undef public_58ef47
#undef public_58ef81
#undef public_58ef86
#undef public_58efa4
#undef public_58eff9
#undef public_58efff
#undef public_58f028
#undef public_58f031
#undef public_58f07e
#undef public_58f0c6
#undef public_58f0d2
#undef public_58f0e0
#undef public_58f102
#undef public_58f167
#undef public_58f172
#undef public_58f1ba
#undef public_58f1ff
