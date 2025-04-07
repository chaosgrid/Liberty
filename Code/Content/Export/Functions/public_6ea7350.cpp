#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7350);
CLANG_FORWARD_PROC_SYMBOL(public_6ea76a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea76e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f44330);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9928);

#define public_6ea73b0 _public_6ea73b0
#define public_6ea73da _public_6ea73da
#define public_6ea7407 _public_6ea7407
#define public_6ea7410 _public_6ea7410
#define public_6ea7433 _public_6ea7433

PROC_DECLARE(0x6ea7350, internal_6ea7350, public_6ea7350);
extern "C" NAKED register_t __cdecl internal_6ea7350()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9928 @0x6ea7352*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9928
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        mov ebx, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ds : [ebx], offset public_6fb43c0
        mov eax, dword ptr ds : [public_6fd0820]
        mov edx, dword ptr ds : [public_6fd082c]
        test edx, edx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x24], 0
        mov edi, eax
        mov dword ptr ss : [esp+0xC], ecx
        je public_6ea7407
        mov edx, ecx
        cmp ecx, edx
        jne public_6ea7407
        cmp edi, eax
        jne public_6ea7407
        mov edi, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [public_6fd0824]
        cmp edi, ecx
        mov esi, edi
        je public_6ea73da
        nop 
        public_6ea73b0 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_6fd081c
        call public_6ea76a0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6fa8fe0
        mov ecx, dword ptr ds : [public_6fd0824]
        add esp, 4
        cmp esi, ecx
        mov edi, esi
        jne public_6ea73b0
        mov eax, dword ptr ds : [public_6fd0820]
        public_6ea73da : nop
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [public_6fd0820]
        mov dword ptr ds : [public_6fd082c], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_6fd0820]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_6fd081c
        mov dword ptr ds : [eax+8], eax
        call public_6f1df30
        jmp public_6ea7433
        public_6ea7407 : nop
        cmp ecx, edi
        je public_6ea7433
        nop 
        lea esp, ss:[esp]
        public_6ea7410 : nop
        mov esi, ecx
        lea ecx, ss:[esp+0xC]
        call public_6ea76e0
        push esi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, offset public_6fd081c
        call public_6f44330
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, edi
        jne public_6ea7410
        public_6ea7433 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [ebx], offset public_6fb385c
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6ea7350)
    }
}

#undef public_6ea73b0
#undef public_6ea73da
#undef public_6ea7407
#undef public_6ea7410
#undef public_6ea7433
