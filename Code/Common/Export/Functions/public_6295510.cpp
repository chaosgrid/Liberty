#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262d50);
CLANG_FORWARD_PROC_SYMBOL(public_6295980);
CLANG_FORWARD_PROC_SYMBOL(public_62959a0);
CLANG_FORWARD_PROC_SYMBOL(public_629b040);
CLANG_FORWARD_PROC_SYMBOL(public_629b440);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);

#define public_6295585 _public_6295585
#define public_62955b0 _public_62955b0
#define public_62955d4 _public_62955d4
#define public_62955df _public_62955df
#define public_6295622 _public_6295622

PROC_DECLARE(0x6295510, internal_6295510, public_6295510);
extern "C" NAKED register_t __cdecl internal_6295510()
{
    __asm
    {
        sub esp, 0x10
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x38]
        fmul dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ss : [esp+0x28]
        fstp dword ptr ds : [edi+0x24]
        mov dword ptr ds : [edi+0x28], ecx
        mov eax, dword ptr ss : [ebp]
        cmp byte ptr ds : [eax], 0
        je public_6295622
        mov edx, dword ptr ds : [public_63fcf0c]
        push edx
        push eax
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        je public_6295622
        push ebx
        push 0x800
        lea ecx, ss:[esp+0x14]
        call public_629b990
        mov ecx, dword ptr ds : [edi+4]
        lea eax, ss:[esp+0x10]
        push eax
        add ecx, 0xE4
        call public_629b440
        push eax
        call public_62959a0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_62955df
        public_6295585 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x58]
        test al, al
        je public_62955b0
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        je public_62955d4
        public_62955b0 : nop
        mov ecx, dword ptr ds : [edi+4]
        lea edx, ss:[esp+0x10]
        push edx
        add ecx, 0xE4
        call public_629b440
        push eax
        call public_62959a0
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_6295585
        jmp public_62955df
        public_62955d4 : nop
        push edi
        mov ecx, esi
        mov dword ptr ds : [edi+0x20], esi
        call public_6295980
        public_62955df : nop
        mov eax, dword ptr ds : [edi+0x20]
        test eax, eax
        pop ebx
        jne public_6295622
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ss : [ebp]
        mov esi, 0x100001
        call public_6262d50
        mov ecx, eax
        add ecx, 8
        call public_6333e60
        push eax
        push ebp
        mov ecx, edi
        call public_629b040
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x39
/*FIXUP push offset public_639ce00 @0x6295612*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ce00
/*FIXUP push offset public_639cdb0 @0x6295617*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639cdb0
        push esi
        call dword ptr ds : [eax]
        add esp, 0x1C
        public_6295622 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6295510)
    }
}

#undef public_6295585
#undef public_62955b0
#undef public_62955d4
#undef public_62955df
#undef public_6295622
