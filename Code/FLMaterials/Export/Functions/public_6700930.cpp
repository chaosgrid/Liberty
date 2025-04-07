#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6700930);
CLANG_FORWARD_PROC_SYMBOL(public_6700a90);

#define public_6700946 _public_6700946
#define public_670096e _public_670096e
#define public_6700972 _public_6700972
#define public_6700998 _public_6700998
#define public_67009af _public_67009af
#define public_67009c0 _public_67009c0
#define public_67009c5 _public_67009c5
#define public_67009d5 _public_67009d5
#define public_67009d8 _public_67009d8

PROC_DECLARE(0x6700930, internal_6700930, public_6700930);
extern "C" NAKED register_t __cdecl internal_6700930()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6700946
        cmp dword ptr ds : [public_670465c], eax
        jle public_670096e
        dec dword ptr ds : [public_670465c]
        public_6700946 : nop
        mov ecx, dword ptr ds : [public_6701048]
        cmp eax, 1
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_6706278], ecx
        jne public_6700998
        push 0x80
        call dword ptr ds : [public_6701044]
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_6706284], eax
        jne public_6700972
        public_670096e : nop
        xor eax, eax
        jmp public_67009d8
        public_6700972 : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_6706284]
/*FIXUP push offset public_6704010 @0x670097a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6704010
/*FIXUP push offset public_6704000 @0x670097f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6704000
        mov dword ptr ds : [public_6706280], eax
        call public_6700a90
        inc dword ptr ds : [public_670465c]
        pop ecx
        pop ecx
        jmp public_67009d5
        public_6700998 : nop
        test eax, eax
        jne public_67009d5
        mov eax, dword ptr ds : [public_6706284]
        test eax, eax
        je public_67009d5
        mov ecx, dword ptr ds : [public_6706280]
        push esi
        lea esi, ds:[ecx-4]
        public_67009af : nop
        cmp esi, eax
        jb public_67009c5
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_67009c0
        call ecx
        mov eax, dword ptr ds : [public_6706284]
        public_67009c0 : nop
        sub esi, 4
        jmp public_67009af
        public_67009c5 : nop
        push eax
        call dword ptr ds : [public_6701054]
        and dword ptr ds : [public_6706284], 0
        pop ecx
        pop esi
        public_67009d5 : nop
        push 1
        pop eax
        public_67009d8 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6700930)
    }
}

#undef public_6700946
#undef public_670096e
#undef public_6700972
#undef public_6700998
#undef public_67009af
#undef public_67009c0
#undef public_67009c5
#undef public_67009d5
#undef public_67009d8
