#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6276730);
CLANG_FORWARD_PROC_SYMBOL(public_6279120);
CLANG_FORWARD_PROC_SYMBOL(public_6310040);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);

#define public_6276765 _public_6276765
#define public_6276791 _public_6276791
#define public_627679f _public_627679f
#define public_62767aa _public_62767aa
#define public_62767d1 _public_62767d1
#define public_62767d4 _public_62767d4
#define public_627680e _public_627680e
#define public_6276824 _public_6276824
#define public_627683b _public_627683b
#define public_627685f _public_627685f
#define public_6276883 _public_6276883
#define public_6276888 _public_6276888
#define public_6276898 _public_6276898

PROC_DECLARE(0x6276730, internal_6276730, public_6276730);
extern "C" NAKED register_t __cdecl internal_6276730()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov ebx, ecx
        push edi
        lea ecx, ds:[ebx+0x184]
        call public_6279120
        mov esi, dword ptr ss : [esp+0x18]
        mov edi, eax
        mov ecx, esi
        mov dword ptr ss : [esp+0xC], edi
        mov byte ptr ds : [edi+0x34], 1
        mov byte ptr ds : [edi+0x35], 0
        call public_6310170
        test al, al
        je public_6276898
        push ebp
/*FIXUP public_6276765 : nop
        push offset public_6399f10 @0x6276765*/
  FIXUP public_6276765 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399f10
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_627683b
        call public_6310040
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        call public_6310b70
        xor ebp, ebp
        mov edi, eax
        xor esi, esi
        public_6276791 : nop
        mov ecx, dword ptr ds : [ebx+0x168]
        test ecx, ecx
        jne public_627679f
        xor eax, eax
        jmp public_62767aa
        public_627679f : nop
        mov eax, dword ptr ds : [ebx+0x16C]
        sub eax, ecx
        sar eax, 2
        public_62767aa : nop
        cmp esi, eax
        jge public_62767d4
        mov eax, dword ptr ds : [ebx+0x168]
        mov eax, dword ptr ds : [eax+esi*4]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push edi
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        jne public_62767d1
        mov edx, dword ptr ds : [ebx+0x168]
        mov ebp, dword ptr ds : [edx+esi*4]
        public_62767d1 : nop
        inc esi
        jmp public_6276791
        public_62767d4 : nop
        test ebp, ebp
        jne public_627680e
        mov ecx, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        push edi
        push edx
        push 0x5A8
/*FIXUP push offset public_639a188 @0x62767e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100001
/*FIXUP push offset public_639a0e0 @0x62767f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a0e0
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        mov edi, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ss : [esp+0x38]
        add esp, 0x1C
        jmp public_6276888
        public_627680e : nop
        mov edi, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [edi], 0
        jne public_6276824
        mov ecx, dword ptr ss : [ebp]
        push ecx
        push edi
        call public_6334400
        add esp, 8
        public_6276824 : nop
        add edi, 4
        lea esi, ss:[ebp+4]
        mov ecx, 0xC
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        jmp public_6276888
/*FIXUP public_627683b : nop
        push offset public_639ab60 @0x627683b*/
  FIXUP public_627683b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ab60
        call public_6310410
        test al, al
        mov ecx, esi
        je public_627685f
        call public_6310b70
        push eax
        lea edx, ds:[edi+0x38]
        push edx
        call public_6334400
        add esp, 8
        jmp public_6276888
/*FIXUP public_627685f : nop
        push offset public_639ab4c @0x627685f*/
  FIXUP public_627685f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ab4c
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276883
        call public_6310b70
        push eax
        lea eax, ds:[edi+0x3C]
        push eax
        call public_6334400
        add esp, 8
        jmp public_6276888
        public_6276883 : nop
        call public_6310040
        public_6276888 : nop
        mov ecx, esi
        call public_6310170
        test al, al
        jne public_6276765
        pop ebp
        public_6276898 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6276730)
    }
}

#undef public_6276765
#undef public_6276791
#undef public_627679f
#undef public_62767aa
#undef public_62767d1
#undef public_62767d4
#undef public_627680e
#undef public_6276824
#undef public_627683b
#undef public_627685f
#undef public_6276883
#undef public_6276888
#undef public_6276898
