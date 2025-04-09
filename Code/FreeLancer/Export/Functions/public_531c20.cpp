#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_531cf0);

#define public_531c4d _public_531c4d
#define public_531c5e _public_531c5e
#define public_531c6f _public_531c6f
#define public_531c80 _public_531c80
#define public_531c8d _public_531c8d
#define public_531c9e _public_531c9e
#define public_531caf _public_531caf
#define public_531cbb _public_531cbb
#define public_531ccc _public_531ccc
#define public_531cd1 _public_531cd1
#define public_531ce2 _public_531ce2

PROC_DECLARE(0x531c20, internal_531c20, public_531c20);
extern "C" NAKED register_t __cdecl internal_531c20()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov eax, ecx
        sub eax, 0xA
        push edi
        je public_531cbb
        dec eax
        je public_531c80
        dec eax
        jne public_531ccc
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        lea edi, ds:[esi+0x10]
        je public_531c4d
        test byte ptr ds : [eax+8], 2
        je public_531c6f
        public_531c4d : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_531c5e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        jne public_531c6f
        public_531c5e : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_531ce2
        mov ecx, dword ptr ds : [eax+0xD4]
        test ecx, ecx
        jne public_531ce2
        public_531c6f : nop
        mov ecx, dword ptr ds : [esi+8]
        push edi
        add ecx, 0x28
        call public_4fcef0
        pop edi
        pop esi
        ret 8
        public_531c80 : nop
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_531c8d
        test byte ptr ds : [eax+8], 2
        je public_531ce2
        public_531c8d : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_531c9e
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x14]
        test al, al
        jne public_531ce2
        public_531c9e : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_531caf
        mov ecx, dword ptr ds : [eax+0xD4]
        test ecx, ecx
        je public_531ce2
        public_531caf : nop
        mov ecx, esi
        call public_531cf0
        pop edi
        pop esi
        ret 8
        public_531cbb : nop
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[esi+0x10]
        push eax
        add ecx, 0x28
        call public_4fcef0
        jmp public_531cd1
        public_531ccc : nop
        cmp ecx, 0xA
        jne public_531ce2
        public_531cd1 : nop
        mov ecx, dword ptr ds : [esi+4]
        push esi
        call dword ptr ds : [public_5c6938]
        mov dword ptr ds : [esi+4], 0
        public_531ce2 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x531c20)
    }
}

#undef public_531c4d
#undef public_531c5e
#undef public_531c6f
#undef public_531c80
#undef public_531c8d
#undef public_531c9e
#undef public_531caf
#undef public_531cbb
#undef public_531ccc
#undef public_531cd1
#undef public_531ce2
