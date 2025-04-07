#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344070);
CLANG_FORWARD_PROC_SYMBOL(public_63464a0);
CLANG_FORWARD_PROC_SYMBOL(public_6347db0);
CLANG_FORWARD_PROC_SYMBOL(public_6355200);
CLANG_FORWARD_PROC_SYMBOL(public_63562d0);
CLANG_FORWARD_PROC_SYMBOL(public_6358c50);
CLANG_FORWARD_PROC_SYMBOL(public_635a1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63464cc _public_63464cc
#define public_63464dd _public_63464dd
#define public_634650d _public_634650d
#define public_6346528 _public_6346528
#define public_634655e _public_634655e
#define public_634656c _public_634656c
#define public_634657a _public_634657a

PROC_DECLARE(0x63464a0, internal_63464a0, public_63464a0);
extern "C" NAKED register_t __cdecl internal_63464a0()
{
    __asm
    {
        sub esp, 0xDC
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [eax+0xA4]
        inc word ptr ds : [eax+0x10]
        xor ecx, ecx
        mov cx, word ptr ds : [ebx+0x52]
        dec ecx
        mov dword ptr ss : [esp+4], ecx
        js public_634657a
        push ebp
        push esi
        push edi
        xor ebp, ebp
        public_63464cc : nop
        mov edx, dword ptr ds : [ebx+0x54]
        mov eax, dword ptr ds : [edx+ecx*4]
        mov eax, dword ptr ds : [eax+0x28]
        cmp eax, ebp
        je public_634656c
        public_63464dd : nop
        movsx esi, word ptr ds : [eax+0xC]
        mov edi, dword ptr ds : [eax]
        add esi, eax
        mov eax, dword ptr ds : [esi+0x70]
        mov ecx, dword ptr ds : [eax+0x44]
        and ecx, 0xFFFFFF01
        or ecx, 1
        mov dword ptr ds : [eax+0x44], ecx
        mov edx, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [edx+0x98]
        cmp ecx, ebx
        jne public_634650d
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x98]
        public_634650d : nop
        test byte ptr ds : [ecx], 0xC
        je public_6346528
        cmp esi, ebp
        je public_634655e
        mov ecx, esi
        call public_6355200
        push esi
        call public_6391d5a
        add esp, 4
        jmp public_634655e
        public_6346528 : nop
        call public_6347db0
        mov ecx, esi
        call public_635a1e0
        mov eax, dword ptr ss : [esp+0x68]
        and eax, 0xFFFFFF00
        lea ecx, ss:[esp+0x14]
        and eax, 0xFFFFFCFF
        push ecx
        mov ecx, esi
        mov word ptr ss : [esp+0x6A], bp
        mov dword ptr ss : [esp+0x6C], eax
        call public_6358c50
        mov ecx, esi
        call public_63562d0
        public_634655e : nop
        cmp edi, ebp
        mov eax, edi
        jne public_63464dd
        mov ecx, dword ptr ss : [esp+0x10]
        public_634656c : nop
        dec ecx
        mov dword ptr ss : [esp+0x10], ecx
        jns public_63464cc
        pop edi
        pop esi
        pop ebp
        public_634657a : nop
        mov edx, dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ds : [edx+0xA4]
        dec word ptr ds : [ecx+0x10]
        call public_6344070
        pop ebx
        add esp, 0xDC
        ret 
        UNREACHABLE_TRAP(0x63464a0)
    }
}

#undef public_63464cc
#undef public_63464dd
#undef public_634650d
#undef public_6346528
#undef public_634655e
#undef public_634656c
#undef public_634657a
