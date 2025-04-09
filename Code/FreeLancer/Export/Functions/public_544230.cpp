#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4110c0);
CLANG_FORWARD_PROC_SYMBOL(public_411300);
CLANG_FORWARD_PROC_SYMBOL(public_4115b0);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_537960);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_538e80);
CLANG_FORWARD_PROC_SYMBOL(public_544230);

#define public_544259 _public_544259
#define public_544289 _public_544289
#define public_544299 _public_544299
#define public_54430d _public_54430d
#define public_544333 _public_544333
#define public_544347 _public_544347
#define public_54435f _public_54435f
#define public_544377 _public_544377

PROC_DECLARE(0x544230, internal_544230, public_544230);
extern "C" NAKED register_t __cdecl internal_544230()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        je public_544259
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax]
        test al, al
        jne public_544259
        mov ecx, dword ptr ds : [esi+8]
        call public_4f7a90
        mov dword ptr ds : [esi+8], 0
        public_544259 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_544299
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        mov al, byte ptr ds : [edi+0x50]
        and eax, 0xFFFFFF01
        push eax
        call dword ptr ds : [edx+0x88]
        mov eax, dword ptr ds : [edi+0x18]
        test eax, eax
        je public_544289
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        call dword ptr ds : [edx+0x58]
        test al, al
        jne public_544299
        public_544289 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], 0
        public_544299 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_544333
        push 1
        push 1
        call public_4110c0
        mov ecx, dword ptr ds : [esi+0xC]
        lea edx, ds:[edi+0x4C]
        push edx
        call public_4115b0
        mov eax, dword ptr ds : [edi+0x48]
        mov ecx, dword ptr ds : [esi+0xC]
        push eax
        call public_411300
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        test al, al
        jne public_54430d
        push ebp
        lea ecx, ds:[edi+4]
        mov ebp, 0x100002
        call dword ptr ds : [public_5c6044]
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0xCE
/*FIXUP push offset public_5ddf90 @0x5442eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ddf90
/*FIXUP push offset public_5daa50 @0x5442f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5daa50
        push ebp
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0xC]
        add esp, 0x14
        call public_537ad0
        mov dword ptr ds : [esi+0xC], 0
        pop ebp
        jmp public_544333
        public_54430d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_544333
        lea ecx, ds:[edi+0x20]
        push ecx
        call public_538e80
        mov edx, dword ptr ds : [edi+0x44]
        mov ecx, dword ptr ds : [edi+0x40]
        add esp, 4
        push 0
        push edx
        push ecx
        mov ecx, dword ptr ds : [esi+0xC]
        push eax
        call public_537960
        public_544333 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_544347
        test byte ptr ds : [eax+8], 2
        jne public_544347
        pop edi
        mov al, 1
        pop esi
        ret 8
        public_544347 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_54435f
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x14]
        test al, al
        je public_54435f
        pop edi
        mov al, 1
        pop esi
        ret 8
        public_54435f : nop
        mov esi, dword ptr ds : [esi+0xC]
        test esi, esi
        je public_544377
        mov eax, dword ptr ds : [esi+0xD4]
        test eax, eax
        jne public_544377
        pop edi
        mov al, 1
        pop esi
        ret 8
        public_544377 : nop
        pop edi
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x544230)
    }
}

#undef public_544259
#undef public_544289
#undef public_544299
#undef public_54430d
#undef public_544333
#undef public_544347
#undef public_54435f
#undef public_544377
