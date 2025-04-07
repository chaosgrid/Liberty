#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6279120);
CLANG_FORWARD_PROC_SYMBOL(public_6310040);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);

#define public_62768e3 _public_62768e3
#define public_6276910 _public_6276910
#define public_627691e _public_627691e
#define public_6276929 _public_6276929
#define public_6276950 _public_6276950
#define public_6276953 _public_6276953
#define public_6276986 _public_6276986
#define public_627699c _public_627699c
#define public_62769af _public_62769af
#define public_62769b4 _public_62769b4
#define public_62769c5 _public_62769c5

PROC_DECLARE(0x62768b0, internal_62768b0, public_62768b0);
extern "C" NAKED register_t __cdecl internal_62768b0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        push esi
        lea ecx, ds:[ebx+0x184]
        call public_6279120
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, esi
        mov dword ptr ss : [esp+0xC], eax
        mov byte ptr ds : [eax+0x34], 0
        mov byte ptr ds : [eax+0x35], 1
        call public_6310170
        test al, al
        je public_62769c5
        push ebp
        push edi
/*FIXUP public_62768e3 : nop
        push offset public_6399f10 @0x62768e3*/
  FIXUP public_62768e3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399f10
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62769af
        call public_6310040
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], eax
        call public_6310b70
        xor ebp, ebp
        mov edi, eax
        xor esi, esi
        nop 
        public_6276910 : nop
        mov ecx, dword ptr ds : [ebx+0x168]
        test ecx, ecx
        jne public_627691e
        xor eax, eax
        jmp public_6276929
        public_627691e : nop
        mov eax, dword ptr ds : [ebx+0x16C]
        sub eax, ecx
        sar eax, 2
        public_6276929 : nop
        cmp esi, eax
        jge public_6276953
        mov eax, dword ptr ds : [ebx+0x168]
        mov eax, dword ptr ds : [eax+esi*4]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push edi
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        jne public_6276950
        mov edx, dword ptr ds : [ebx+0x168]
        mov ebp, dword ptr ds : [edx+esi*4]
        public_6276950 : nop
        inc esi
        jmp public_6276910
        public_6276953 : nop
        test ebp, ebp
        jne public_6276986
        mov ecx, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        push ecx
        push edi
        push edx
        push 0x5A8
/*FIXUP push offset public_639a188 @0x6276966*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100001
/*FIXUP push offset public_639a0e0 @0x6276970*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a0e0
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        mov esi, dword ptr ss : [esp+0x38]
        add esp, 0x1C
        jmp public_62769b4
        public_6276986 : nop
        mov edi, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [edi], 0
        jne public_627699c
        mov ecx, dword ptr ss : [ebp]
        push ecx
        push edi
        call public_6334400
        add esp, 8
        public_627699c : nop
        lea esi, ss:[ebp+4]
        add edi, 4
        mov ecx, 0xC
        rep movsd
        mov esi, dword ptr ss : [esp+0x1C]
        jmp public_62769b4
        public_62769af : nop
        call public_6310040
        public_62769b4 : nop
        mov ecx, esi
        call public_6310170
        test al, al
        jne public_62768e3
        pop edi
        pop ebp
        public_62769c5 : nop
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62768b0)
    }
}

#undef public_62768e3
#undef public_6276910
#undef public_627691e
#undef public_6276929
#undef public_6276950
#undef public_6276953
#undef public_6276986
#undef public_627699c
#undef public_62769af
#undef public_62769b4
#undef public_62769c5
