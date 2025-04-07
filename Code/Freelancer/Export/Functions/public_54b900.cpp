#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f130);
CLANG_FORWARD_PROC_SYMBOL(public_549e70);
CLANG_FORWARD_PROC_SYMBOL(public_54b900);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_54b999 _public_54b999
#define public_54b9b5 _public_54b9b5
#define public_54b9c1 _public_54b9c1
#define public_54b9db _public_54b9db
#define public_54b9e5 _public_54b9e5
#define public_54ba09 _public_54ba09
#define public_54ba0b _public_54ba0b
#define public_54ba1b _public_54ba1b
#define public_54bac2 _public_54bac2
#define public_54bac8 _public_54bac8
#define public_54bad1 _public_54bad1
#define public_54bad3 _public_54bad3

PROC_DECLARE(0x54b900, internal_54b900, public_54b900);
extern "C" NAKED register_t __cdecl internal_54b900()
{
    __asm
    {
        mov eax, 0x201C
        call public_5b7e90
        mov ecx, dword ptr ds : [public_613ed0]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push esi
        push edi
        push 0xFDFF
        call dword ptr ds : [eax+0xC]
        mov esi, eax
        test esi, esi
        mov bl, 1
        je public_54b9db
        mov eax, dword ptr ds : [public_679738]
        mov ecx, dword ptr ds : [public_614030]
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0x800
        mov edx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x10], ecx
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ecx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        test eax, eax
        jbe public_54b9c1
        mov edx, dword ptr ds : [public_674aa0]
        cmp byte ptr ds : [edx+0x5BA], bl
        jne public_54b999
        push 0
        push 0x39
        call public_5763b0
        add esp, 8
        public_54b999 : nop
        mov eax, dword ptr ds : [public_674aa0]
        cmp byte ptr ds : [eax+0x5B9], bl
        jne public_54b9b5
        push 0
        push 0xBF
        call public_5763b0
        add esp, 8
        public_54b9b5 : nop
        mov dword ptr ds : [public_6792f4], 0x42C80000
        jmp public_54b9e5
        public_54b9c1 : nop
        mov ecx, dword ptr ds : [public_674aa0]
        cmp byte ptr ds : [ecx+0x5BA], bl
        jne public_54b9db
        push 0
        push 0x39
        call public_5763b0
        add esp, 8
        public_54b9db : nop
        mov dword ptr ds : [public_6792f4], 0x43480000
        public_54b9e5 : nop
        cmp dword ptr ds : [public_679738], offset public_678ba4
        mov dword ptr ds : [public_6792f0], 0x3F000000
        jne public_54ba1b
        mov eax, dword ptr ds : [public_679744]
        test eax, eax
        je public_54ba09
        add eax, 0xFFFFFFF8
        jmp public_54ba0b
        public_54ba09 : nop
        xor eax, eax
        public_54ba0b : nop
        push eax
/*FIXUP push offset public_5e079c @0x54ba0c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e079c
        mov ecx, offset public_678b98
        call public_549e70
        public_54ba1b : nop
        call public_40f130
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x10]
        mov esi, eax
        mov byte ptr ds : [public_6791d8], bl
        mov ecx, 0xC
        mov edi, offset public_6791a8
        rep movsd
        mov esi, eax
        add eax, 0x24
        mov ecx, 9
        mov edi, offset public_6792b4
        rep movsd
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_6792d8], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [public_6792ec]
        mov dword ptr ds : [public_6792dc], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [public_6792e8], ecx
        mov ecx, dword ptr ds : [public_679744]
        test ecx, ecx
        mov dword ptr ds : [public_6792e0], eax
        mov dword ptr ds : [public_6792e4], 0x3F800000
        je public_54bad1
        lea eax, ds:[ecx-8]
        test eax, eax
        je public_54bac8
        add eax, 0xC
        test eax, eax
        je public_54bac8
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_54bac8
        mov edx, dword ptr ds : [esi+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_54bac8
        push 3
        mov ecx, esi
        call dword ptr ds : [public_5c6648]
        test al, al
        jne public_54bac2
        push 3
        mov ecx, esi
        call dword ptr ds : [public_5c6a54]
        public_54bac2 : nop
        mov ecx, dword ptr ds : [public_679744]
        public_54bac8 : nop
        test ecx, ecx
        je public_54bad1
        lea eax, ds:[ecx-8]
        jmp public_54bad3
        public_54bad1 : nop
        xor eax, eax
        public_54bad3 : nop
        push eax
/*FIXUP push offset public_5e0780 @0x54bad4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0780
        mov ecx, offset public_678b98
        call public_549e70
        pop edi
        pop esi
        pop ebx
        add esp, 0x201C
        ret 
        UNREACHABLE_TRAP(0x54b900)
    }
}

#undef public_54b999
#undef public_54b9b5
#undef public_54b9c1
#undef public_54b9db
#undef public_54b9e5
#undef public_54ba09
#undef public_54ba0b
#undef public_54ba1b
#undef public_54bac2
#undef public_54bac8
#undef public_54bad1
#undef public_54bad3
