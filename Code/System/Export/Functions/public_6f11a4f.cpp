#include "System-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f11a4f);
CLANG_FORWARD_PROC_SYMBOL(public_6f11b98);

#define public_6f11a65 _public_6f11a65
#define public_6f11a8d _public_6f11a8d
#define public_6f11a91 _public_6f11a91
#define public_6f11ab7 _public_6f11ab7
#define public_6f11ace _public_6f11ace
#define public_6f11adf _public_6f11adf
#define public_6f11ae4 _public_6f11ae4
#define public_6f11af4 _public_6f11af4
#define public_6f11af7 _public_6f11af7

PROC_DECLARE(0x6f11a4f, internal_6f11a4f, public_6f11a4f);
extern "C" NAKED register_t __cdecl internal_6f11a4f()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6f11a65
        cmp dword ptr ds : [public_6f1319c], eax
        jle public_6f11a8d
        dec dword ptr ds : [public_6f1319c]
        public_6f11a65 : nop
        mov ecx, dword ptr ds : [public_6f12034]
        cmp eax, 1
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_6f131a0], ecx
        jne public_6f11ab7
        push 0x80
        call dword ptr ds : [public_6f12030]
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_6f131a8], eax
        jne public_6f11a91
        public_6f11a8d : nop
        xor eax, eax
        jmp public_6f11af7
        public_6f11a91 : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_6f131a8]
/*FIXUP push offset public_6f13004 @0x6f11a99*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f13004
/*FIXUP push offset public_6f13000 @0x6f11a9e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f13000
        mov dword ptr ds : [public_6f131a4], eax
        call public_6f11b98
        inc dword ptr ds : [public_6f1319c]
        pop ecx
        pop ecx
        jmp public_6f11af4
        public_6f11ab7 : nop
        test eax, eax
        jne public_6f11af4
        mov eax, dword ptr ds : [public_6f131a8]
        test eax, eax
        je public_6f11af4
        mov ecx, dword ptr ds : [public_6f131a4]
        push esi
        lea esi, ds:[ecx-4]
        public_6f11ace : nop
        cmp esi, eax
        jb public_6f11ae4
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6f11adf
        call ecx
        mov eax, dword ptr ds : [public_6f131a8]
        public_6f11adf : nop
        sub esi, 4
        jmp public_6f11ace
        public_6f11ae4 : nop
        push eax
        call dword ptr ds : [public_6f12024]
        and dword ptr ds : [public_6f131a8], 0
        pop ecx
        pop esi
        public_6f11af4 : nop
        push 1
        pop eax
        public_6f11af7 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6f11a4f)
    }
}

#undef public_6f11a65
#undef public_6f11a8d
#undef public_6f11a91
#undef public_6f11ab7
#undef public_6f11ace
#undef public_6f11adf
#undef public_6f11ae4
#undef public_6f11af4
#undef public_6f11af7
