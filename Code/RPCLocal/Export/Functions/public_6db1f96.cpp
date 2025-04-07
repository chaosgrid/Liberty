#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1f96);
CLANG_FORWARD_PROC_SYMBOL(public_6db20fc);

#define public_6db1fac _public_6db1fac
#define public_6db1fd4 _public_6db1fd4
#define public_6db1fd8 _public_6db1fd8
#define public_6db1ffe _public_6db1ffe
#define public_6db2015 _public_6db2015
#define public_6db2026 _public_6db2026
#define public_6db202b _public_6db202b
#define public_6db203b _public_6db203b
#define public_6db203e _public_6db203e

PROC_DECLARE(0x6db1f96, internal_6db1f96, public_6db1f96);
extern "C" NAKED register_t __cdecl internal_6db1f96()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6db1fac
        cmp dword ptr ds : [public_6dbc62c], eax
        jle public_6db1fd4
        dec dword ptr ds : [public_6dbc62c]
        public_6db1fac : nop
        mov ecx, dword ptr ds : [public_6db31b8]
        cmp eax, 1
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_6dbc630], ecx
        jne public_6db1ffe
        push 0x80
        call dword ptr ds : [public_6db31c4]
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_6dbc63c], eax
        jne public_6db1fd8
        public_6db1fd4 : nop
        xor eax, eax
        jmp public_6db203e
        public_6db1fd8 : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_6dbc63c]
/*FIXUP push offset public_6dbb764 @0x6db1fe0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6dbb764
/*FIXUP push offset public_6dbb000 @0x6db1fe5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6dbb000
        mov dword ptr ds : [public_6dbc638], eax
        call public_6db20fc
        inc dword ptr ds : [public_6dbc62c]
        pop ecx
        pop ecx
        jmp public_6db203b
        public_6db1ffe : nop
        test eax, eax
        jne public_6db203b
        mov eax, dword ptr ds : [public_6dbc63c]
        test eax, eax
        je public_6db203b
        mov ecx, dword ptr ds : [public_6dbc638]
        push esi
        lea esi, ds:[ecx-4]
        public_6db2015 : nop
        cmp esi, eax
        jb public_6db202b
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6db2026
        call ecx
        mov eax, dword ptr ds : [public_6dbc63c]
        public_6db2026 : nop
        sub esi, 4
        jmp public_6db2015
        public_6db202b : nop
        push eax
        call dword ptr ds : [public_6db31c0]
        and dword ptr ds : [public_6dbc63c], 0
        pop ecx
        pop esi
        public_6db203b : nop
        push 1
        pop eax
        public_6db203e : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6db1f96)
    }
}

#undef public_6db1fac
#undef public_6db1fd4
#undef public_6db1fd8
#undef public_6db1ffe
#undef public_6db2015
#undef public_6db2026
#undef public_6db202b
#undef public_6db203b
#undef public_6db203e
