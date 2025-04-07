#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_636a190);
CLANG_FORWARD_PROC_SYMBOL(public_636a1e0);
CLANG_FORWARD_PROC_SYMBOL(public_636ca00);
CLANG_FORWARD_PROC_SYMBOL(public_636cf70);
CLANG_FORWARD_JUMP_SYMBOL(public_63986e8);

#define public_636a247 _public_636a247
#define public_636a26d _public_636a26d

PROC_DECLARE(0x636a1e0, internal_636a1e0, public_636a1e0);
extern "C" NAKED register_t __cdecl internal_636a1e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63986e8 @0x636a1e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63986e8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x14]
        xor ecx, ecx
        mov cx, word ptr ds : [eax+2]
        mov ebx, dword ptr ds : [eax+ecx*8+4]
        lea ecx, ss:[esp+0x10]
        call public_636ca00
        push ebx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x2C], 0
        call public_636a190
        lea ecx, ss:[esp+0x10]
        call public_636cf70
        lea esi, ds:[edi+0x18]
        mov ebp, eax
        mov ax, word ptr ds : [esi+2]
        cmp ax, word ptr ds : [esi]
        jb public_636a247
        mov ecx, esi
        call public_63441a0
        public_636a247 : nop
        mov edx, dword ptr ds : [esi+4]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+2]
        mov dword ptr ds : [edx+ecx*4], ebp
        inc word ptr ds : [esi+2]
        lea esi, ds:[edi+0x20]
        mov dword ptr ds : [ebx+0x1C], ebp
        mov ax, word ptr ds : [esi+2]
        cmp ax, word ptr ds : [esi]
        jb public_636a26d
        mov ecx, esi
        call public_63441a0
        public_636a26d : nop
        mov edx, dword ptr ds : [esi+4]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+2]
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov dword ptr ds : [edx+ecx*4], ebx
        inc word ptr ds : [esi+2]
        lea ecx, ss:[esp+0x10]
        call public_63449d0
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x636a1e0)
    }
}

#undef public_636a247
#undef public_636a26d
