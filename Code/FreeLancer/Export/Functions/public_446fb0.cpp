#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446c80);
CLANG_FORWARD_PROC_SYMBOL(public_446ec0);
CLANG_FORWARD_PROC_SYMBOL(public_446fb0);
CLANG_FORWARD_PROC_SYMBOL(public_447620);
CLANG_FORWARD_PROC_SYMBOL(public_457dc0);
CLANG_FORWARD_PROC_SYMBOL(public_457e30);
CLANG_FORWARD_PROC_SYMBOL(public_458160);
CLANG_FORWARD_PROC_SYMBOL(public_5594b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_JUMP_SYMBOL(public_5b99a3);

#define public_446ff0 _public_446ff0
#define public_447006 _public_447006
#define public_447020 _public_447020
#define public_447040 _public_447040
#define public_447050 _public_447050
#define public_447077 _public_447077
#define public_44709e _public_44709e
#define public_4470af _public_4470af
#define public_4470e2 _public_4470e2

PROC_DECLARE(0x446fb0, internal_446fb0, public_446fb0);
extern "C" NAKED register_t __cdecl internal_446fb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b99a3 @0x446fb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b99a3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_5cbdf0
        mov ebp, dword ptr ds : [esi+0x6C]
        test ebp, ebp
        mov dword ptr ss : [esp+0x20], 1
        je public_447020
        mov ebx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_447006
        public_446ff0 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_5c6188]
        cmp edi, ebx
        jne public_446ff0
        public_447006 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        xor eax, eax
        push ebp
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], eax
        call public_5b7e1d
        add esp, 8
        public_447020 : nop
        lea ecx, ds:[esi+0x64]
        push ecx
        call dword ptr ds : [public_5c60c8]
        mov eax, dword ptr ds : [esi+0x78]
        xor ebp, ebp
        add esp, 4
        xor edi, edi
        cmp eax, ebp
        jle public_447050
        lea ebx, ds:[esi+0x74]
        nop 
        lea esp, ss:[esp]
        public_447040 : nop
        push edi
        mov ecx, ebx
        call public_458160
        mov eax, dword ptr ds : [esi+0x78]
        inc edi
        cmp edi, eax
        jl public_447040
        public_447050 : nop
        mov eax, dword ptr ds : [esi+0xA0]
        cmp eax, ebp
        je public_447077
        mov edx, dword ptr ds : [eax-4]
        lea edi, ds:[eax-4]
/*FIXUP push offset _public_446c80 @0x447060*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_446c80
        push edx
        push 0x44
        push eax
        call public_5b7ec6
        push edi
        call public_5b7e1d
        add esp, 4
        public_447077 : nop
        mov eax, dword ptr ds : [esi+0xA4]
        cmp eax, ebp
        je public_44709e
        mov ecx, dword ptr ds : [eax-4]
        lea edi, ds:[eax-4]
/*FIXUP push offset _public_446ec0 @0x447087*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_446ec0
        push ecx
        push 8
        push eax
        call public_5b7ec6
        push edi
        call public_5b7e1d
        add esp, 4
        public_44709e : nop
        mov ecx, dword ptr ds : [esi+0xA8]
        cmp ecx, ebp
        je public_4470af
        push 3
        call public_447620
        public_4470af : nop
        lea edi, ds:[esi+0x74]
        mov ecx, edi
        mov dword ptr ds : [esi+0xA0], ebp
        mov dword ptr ds : [esi+0xA4], ebp
        mov dword ptr ds : [esi+0xA8], ebp
        call public_457e30
        mov eax, dword ptr ds : [esi+0x70]
        cmp eax, 0xFFFFFFFF
        je public_4470e2
        mov edx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x60]
        public_4470e2 : nop
        mov ecx, edi
        mov dword ptr ds : [public_668a9c], ebp
        mov byte ptr ss : [esp+0x20], 0
        call public_457dc0
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_5594b0
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x446fb0)
    }
}

#undef public_446ff0
#undef public_447006
#undef public_447020
#undef public_447040
#undef public_447050
#undef public_447077
#undef public_44709e
#undef public_4470af
#undef public_4470e2
