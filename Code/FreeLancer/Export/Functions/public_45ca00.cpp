#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_45cf60);
CLANG_FORWARD_PROC_SYMBOL(public_4a2a80);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);
CLANG_FORWARD_PROC_SYMBOL(public_59e6e0);

#define public_45ca4b _public_45ca4b
#define public_45ca5e _public_45ca5e
#define public_45ca71 _public_45ca71
#define public_45ca80 _public_45ca80
#define public_45ca97 _public_45ca97
#define public_45cab9 _public_45cab9
#define public_45cac6 _public_45cac6
#define public_45cacd _public_45cacd
#define public_45cad4 _public_45cad4

PROC_DECLARE(0x45ca00, internal_45ca00, public_45ca00);
extern "C" NAKED register_t __cdecl internal_45ca00()
{
    __asm
    {
        push edi
        mov edi, ecx
        call public_45a740
        test al, al
        je public_45ca4b
        mov al, byte ptr ds : [public_67dcc8]
        test al, al
        jne public_45ca4b
        mov eax, dword ptr ds : [edi+0x3A8]
        test eax, eax
        je public_45cad4
        lea ecx, ds:[edi+0x330]
        call public_55e280
        test al, al
        jne public_45cad4
        mov al, byte ptr ds : [public_66d359]
        test al, al
        jne public_45cad4
        mov ecx, edi
        pop edi
        jmp public_45cf60
        public_45ca4b : nop
        call public_41a3e0
        test al, al
        je public_45ca5e
        mov al, byte ptr ds : [edi+0x52F]
        test al, al
        je public_45cad4
        public_45ca5e : nop
        mov al, byte ptr ds : [public_67dcc8]
        test al, al
        je public_45ca71
        mov eax, dword ptr ds : [edi+0x3A8]
        test eax, eax
        je public_45cad4
        public_45ca71 : nop
        push esi
        mov esi, dword ptr ds : [edi+0xC]
        test esi, esi
        je public_45cacd
        lea esp, ss:[esp]
        public_45ca80 : nop
        cmp dword ptr ds : [edi+0x50C], esi
        jne public_45ca97
        lea ecx, ds:[edi+0x350]
        call public_55e280
        test al, al
        jne public_45cac6
        public_45ca97 : nop
        cmp dword ptr ds : [edi+0x3A8], esi
        jne public_45cab9
        lea ecx, ds:[edi+0x330]
        call public_55e280
        test al, al
        jne public_45cab9
        push esi
        call public_59e6e0
        add esp, 4
        jmp public_45cac6
        public_45cab9 : nop
        test byte ptr ds : [esi+0x6C], 2
        je public_45cac6
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x34]
        public_45cac6 : nop
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_45ca80
        public_45cacd : nop
        pop esi
        pop edi
        jmp public_4a2a80
        public_45cad4 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x45ca00)
    }
}

#undef public_45ca4b
#undef public_45ca5e
#undef public_45ca71
#undef public_45ca80
#undef public_45ca97
#undef public_45cab9
#undef public_45cac6
#undef public_45cacd
#undef public_45cad4
