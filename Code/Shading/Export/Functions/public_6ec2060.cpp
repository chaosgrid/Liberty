#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebe660);

#define public_6ec2090 _public_6ec2090
#define public_6ec20b0 _public_6ec20b0
#define public_6ec20bd _public_6ec20bd
#define public_6ec20c5 _public_6ec20c5
#define public_6ec20cf _public_6ec20cf
#define public_6ec20d6 _public_6ec20d6
#define public_6ec20db _public_6ec20db

PROC_DECLARE(0x6ec2060, internal_6ec2060, public_6ec2060);
extern "C" NAKED register_t __cdecl internal_6ec2060()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        push ebx
        push esi
        jne public_6ec20db
        mov eax, dword ptr ss : [esp+0xC]
        mov ebx, dword ptr ds : [eax+0x80]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6ec20db
        fld dword ptr ss : [esp+0x14]
        push edi
        fmul dword ptr ds : [public_6ed29e8]
        fstp dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x14]
        lea ecx, ds:[ecx]
        public_6ec2090 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        call public_6ebe660
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6ec20bd
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6ec20d6
        mov edi, edi
        public_6ec20b0 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_6ec20b0
        jmp public_6ec20d6
        public_6ec20bd : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ec20cf
        public_6ec20c5 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6ec20c5
        public_6ec20cf : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6ec20d6
        mov esi, eax
        public_6ec20d6 : nop
        cmp esi, ebx
        jne public_6ec2090
        pop edi
        public_6ec20db : nop
        pop esi
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ec2060)
    }
}

#undef public_6ec2090
#undef public_6ec20b0
#undef public_6ec20bd
#undef public_6ec20c5
#undef public_6ec20cf
#undef public_6ec20d6
#undef public_6ec20db
