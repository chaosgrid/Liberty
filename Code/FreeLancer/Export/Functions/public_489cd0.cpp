#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489cd0);
CLANG_FORWARD_PROC_SYMBOL(public_489dc0);
CLANG_FORWARD_PROC_SYMBOL(public_489f70);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc298);

#define public_489d04 _public_489d04
#define public_489d2a _public_489d2a
#define public_489d3e _public_489d3e
#define public_489d50 _public_489d50
#define public_489d97 _public_489d97

PROC_DECLARE(0x489cd0, internal_489cd0, public_489cd0);
extern "C" NAKED register_t __cdecl internal_489cd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bc298 @0x489cd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc298
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov ebp, dword ptr ds : [ebx+4]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        mov dword ptr ss : [esp+0x20], 0
        je public_489d3e
        public_489d04 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        lea eax, ds:[esi+0x10]
        je public_489d2a
        push eax
        call public_489dc0
        add esp, 4
        public_489d2a : nop
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_489d04
        public_489d3e : nop
        mov ebp, dword ptr ds : [ebx+4]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_489d97
        public_489d50 : nop
        push 0
        lea ecx, ss:[esp+0x18]
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push ecx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        call public_53ab20
        mov esi, dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        push 0
        lea ecx, ds:[esi+8]
        call public_489f70
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_489d50
        public_489d97 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        pop edi
        pop esi
        xor eax, eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x489cd0)
    }
}

#undef public_489d04
#undef public_489d2a
#undef public_489d3e
#undef public_489d50
#undef public_489d97
