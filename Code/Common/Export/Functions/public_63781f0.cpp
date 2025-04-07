#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f70);
CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_63781f0);
CLANG_FORWARD_PROC_SYMBOL(public_63782e0);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);

#define public_6378235 _public_6378235
#define public_6378255 _public_6378255
#define public_637828b _public_637828b
#define public_637829b _public_637829b
#define public_63782aa _public_63782aa
#define public_63782bc _public_63782bc
#define public_63782c1 _public_63782c1
#define public_63782d0 _public_63782d0
#define public_63782de _public_63782de

PROC_DECLARE(0x63781f0, internal_63781f0, public_63781f0);
extern "C" NAKED register_t __cdecl internal_63781f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b968]
        mov ecx, dword ptr ds : [public_658b97c]
/*FIXUP push offset _public_63782e0 @0x63781fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_63782e0
        push 4
        push eax
        push ecx
        call dword ptr ds : [public_63992a8]
        mov edx, dword ptr ds : [public_658b97c]
        mov eax, dword ptr ds : [public_658b968]
        mov eax, dword ptr ds : [edx+eax*4-4]
        mov ecx, dword ptr ds : [public_658b960]
        mov edx, dword ptr ds : [public_658b964]
        add esp, 0x10
        cmp eax, ecx
        mov dword ptr ds : [public_658b970], eax
        jge public_6378235
        cmp eax, edx
        jl public_6378255
        public_6378235 : nop
        push edx
        push ecx
        push eax
/*FIXUP push offset public_63f2fd4 @0x6378238*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2fd4
        call public_6356960
        push 0
        push 0
        push 4
        call public_6378600
        mov eax, dword ptr ds : [public_658b970]
        add esp, 0x1C
        public_6378255 : nop
        lea ecx, ds:[eax*4+4]
        push ecx
        call public_6343f70
        add esp, 4
        test eax, eax
        mov dword ptr ds : [public_658b980], eax
        jne public_637828b
/*FIXUP push offset public_63f2fa4 @0x637826e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2fa4
        call public_6356960
        push 0
        push 0
        push 4
        call public_6378600
        mov eax, dword ptr ds : [public_658b980]
        add esp, 0x10
        public_637828b : nop
        mov edx, dword ptr ds : [public_658b970]
        lea ecx, ds:[edx+1]
        mov edx, ecx
        dec ecx
        test edx, edx
        je public_63782aa
        public_637829b : nop
        mov dword ptr ds : [eax+ecx*4], ecx
        mov eax, ecx
        dec ecx
        test eax, eax
        mov eax, dword ptr ds : [public_658b980]
        jne public_637829b
        public_63782aa : nop
        push esi
        mov esi, dword ptr ds : [public_658b970]
        xor ecx, ecx
        xor edx, edx
        test esi, esi
        jl public_63782de
        push edi
        jmp public_63782c1
        public_63782bc : nop
        mov eax, dword ptr ds : [public_658b980]
        public_63782c1 : nop
        mov edi, dword ptr ds : [public_658b97c]
        mov esi, dword ptr ds : [eax+edx*4]
        cmp esi, dword ptr ds : [edi+ecx*4]
        jle public_63782d0
        inc ecx
        public_63782d0 : nop
        mov dword ptr ds : [eax+edx*4], ecx
        mov eax, dword ptr ds : [public_658b970]
        inc edx
        cmp edx, eax
        jle public_63782bc
        pop edi
        public_63782de : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63781f0)
    }
}

#undef public_6378235
#undef public_6378255
#undef public_637828b
#undef public_637829b
#undef public_63782aa
#undef public_63782bc
#undef public_63782c1
#undef public_63782d0
#undef public_63782de
