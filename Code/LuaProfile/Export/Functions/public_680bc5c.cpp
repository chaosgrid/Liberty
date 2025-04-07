#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_680bc5c);
CLANG_FORWARD_PROC_SYMBOL(public_680bdb0);

#define public_680bc72 _public_680bc72
#define public_680bc9a _public_680bc9a
#define public_680bc9e _public_680bc9e
#define public_680bcc4 _public_680bcc4
#define public_680bcdb _public_680bcdb
#define public_680bcec _public_680bcec
#define public_680bcf1 _public_680bcf1
#define public_680bd01 _public_680bd01
#define public_680bd04 _public_680bd04

PROC_DECLARE(0x680bc5c, internal_680bc5c, public_680bc5c);
extern "C" NAKED register_t __cdecl internal_680bc5c()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_680bc72
        cmp dword ptr ds : [public_680e608], eax
        jle public_680bc9a
        dec dword ptr ds : [public_680e608]
        public_680bc72 : nop
        mov ecx, dword ptr ds : [public_680c090]
        cmp eax, 1
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_680e60c], ecx
        jne public_680bcc4
        push 0x80
        call dword ptr ds : [public_680c08c]
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_680e614], eax
        jne public_680bc9e
        public_680bc9a : nop
        xor eax, eax
        jmp public_680bd04
        public_680bc9e : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_680e614]
/*FIXUP push offset public_680d004 @0x680bca6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d004
/*FIXUP push offset public_680d000 @0x680bcab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d000
        mov dword ptr ds : [public_680e610], eax
        call public_680bdb0
        inc dword ptr ds : [public_680e608]
        pop ecx
        pop ecx
        jmp public_680bd01
        public_680bcc4 : nop
        test eax, eax
        jne public_680bd01
        mov eax, dword ptr ds : [public_680e614]
        test eax, eax
        je public_680bd01
        mov ecx, dword ptr ds : [public_680e610]
        push esi
        lea esi, ds:[ecx-4]
        public_680bcdb : nop
        cmp esi, eax
        jb public_680bcf1
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_680bcec
        call ecx
        mov eax, dword ptr ds : [public_680e614]
        public_680bcec : nop
        sub esi, 4
        jmp public_680bcdb
        public_680bcf1 : nop
        push eax
        call dword ptr ds : [public_680c018]
        and dword ptr ds : [public_680e614], 0
        pop ecx
        pop esi
        public_680bd01 : nop
        push 1
        pop eax
        public_680bd04 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x680bc5c)
    }
}

#undef public_680bc72
#undef public_680bc9a
#undef public_680bc9e
#undef public_680bcc4
#undef public_680bcdb
#undef public_680bcec
#undef public_680bcf1
#undef public_680bd01
#undef public_680bd04
