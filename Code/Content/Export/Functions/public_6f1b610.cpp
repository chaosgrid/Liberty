#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1b610);
CLANG_FORWARD_PROC_SYMBOL(public_6f1b670);

#define public_6f1b620 _public_6f1b620
#define public_6f1b640 _public_6f1b640
#define public_6f1b64d _public_6f1b64d
#define public_6f1b655 _public_6f1b655
#define public_6f1b65f _public_6f1b65f
#define public_6f1b666 _public_6f1b666
#define public_6f1b66b _public_6f1b66b

PROC_DECLARE(0x6f1b610, internal_6f1b610, public_6f1b610);
extern "C" NAKED register_t __cdecl internal_6f1b610()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x40]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f1b66b
        lea ecx, ds:[ecx]
        public_6f1b620 : nop
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        mov ecx, edi
        call public_6f1b670
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6f1b64d
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6f1b666
        public_6f1b640 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_6f1b640
        jmp public_6f1b666
        public_6f1b64d : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f1b65f
        public_6f1b655 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6f1b655
        public_6f1b65f : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6f1b666
        mov esi, eax
        public_6f1b666 : nop
        cmp esi, dword ptr ds : [edi+0x40]
        jne public_6f1b620
        public_6f1b66b : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f1b610)
    }
}

#undef public_6f1b620
#undef public_6f1b640
#undef public_6f1b64d
#undef public_6f1b655
#undef public_6f1b65f
#undef public_6f1b666
#undef public_6f1b66b
