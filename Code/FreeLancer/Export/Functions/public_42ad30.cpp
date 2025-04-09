#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42ad30);

#define public_42ad42 _public_42ad42
#define public_42ad63 _public_42ad63
#define public_42ad78 _public_42ad78
#define public_42ad85 _public_42ad85
#define public_42ad90 _public_42ad90
#define public_42ad9a _public_42ad9a
#define public_42ada1 _public_42ada1
#define public_42adab _public_42adab

PROC_DECLARE(0x42ad30, internal_42ad30, public_42ad30);
extern "C" NAKED register_t __cdecl internal_42ad30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_667cc4]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_42adab
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push edi
        public_42ad42 : nop
        mov eax, dword ptr ds : [esi+0x24]
        lea edi, ds:[esi+0xC]
        shr eax, 0x14
        and eax, ebx
        test al, 0xF
        je public_42ad63
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        cmp eax, 0xFFFFFFFF
        jne public_42ad63
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        public_42ad63 : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x39]
        test cl, cl
        jne public_42ad85
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x39]
        test cl, cl
        jne public_42ada1
        public_42ad78 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x39]
        test cl, cl
        je public_42ad78
        jmp public_42ada1
        public_42ad85 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_42ad9a
        lea ecx, ds:[ecx]
        public_42ad90 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_42ad90
        public_42ad9a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_42ada1
        mov esi, eax
        public_42ada1 : nop
        cmp esi, dword ptr ds : [public_667cc4]
        jne public_42ad42
        pop edi
        pop ebx
        public_42adab : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x42ad30)
    }
}

#undef public_42ad42
#undef public_42ad63
#undef public_42ad78
#undef public_42ad85
#undef public_42ad90
#undef public_42ad9a
#undef public_42ada1
#undef public_42adab
