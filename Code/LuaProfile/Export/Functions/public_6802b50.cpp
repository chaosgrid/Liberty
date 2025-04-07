#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802900);
CLANG_FORWARD_PROC_SYMBOL(public_6802b00);
CLANG_FORWARD_PROC_SYMBOL(public_6802b50);
CLANG_FORWARD_PROC_SYMBOL(public_6802cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6802d40);
CLANG_FORWARD_PROC_SYMBOL(public_6802e00);
CLANG_FORWARD_PROC_SYMBOL(public_68042e0);
CLANG_FORWARD_PROC_SYMBOL(public_6804fe0);

#define public_6802bbf _public_6802bbf
#define public_6802bde _public_6802bde
#define public_6802bed _public_6802bed
#define public_6802c02 _public_6802c02
#define public_6802c1e _public_6802c1e
#define public_6802c23 _public_6802c23
#define public_6802c28 _public_6802c28
#define public_6802c2b _public_6802c2b
#define public_6802c49 _public_6802c49
#define public_6802c55 _public_6802c55
#define public_6802c68 _public_6802c68
#define public_6802c9b _public_6802c9b

PROC_DECLARE(0x6802b50, internal_6802b50, public_6802b50);
extern "C" NAKED register_t __cdecl internal_6802b50()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [edi]
        sub esi, eax
        sar esi, 4
        sub esi, ebp
        mov ecx, esi
        shl ecx, 4
        lea eax, ds:[ecx+eax-0x10]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, 0xFFFFFFF9
        je public_6802c02
        cmp ecx, 0xFFFFFFFB
        je public_6802bed
        cmp ecx, 0xFFFFFFFC
        je public_6802bde
        push eax
        call public_6804fe0
        lea edx, ds:[eax+eax*8]
        mov eax, dword ptr ds : [public_680e604]
        mov ebx, dword ptr ds : [eax+0x64]
        shl edx, 5
        sub ebx, edx
        mov eax, dword ptr ds : [ebx+0x110]
        add ebx, 0x110
        add esp, 4
        cmp eax, 0xFFFFFFFA
        jne public_6802bbf
/*FIXUP push offset public_680d4a8 @0x6802bb2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d4a8
        call public_6802e00
        add esp, 4
        public_6802bbf : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edi]
        push ecx
        sub edx, dword ptr ds : [edi+4]
        sar edx, 4
        sub edx, esi
        inc edx
        push edx
        push ebx
        call public_6802b00
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6802bde : nop
        mov dword ptr ds : [eax], 0xFFFFFFF7
        mov eax, dword ptr ds : [eax+8]
        push esi
        push eax
        push 0
        jmp public_6802c23
        public_6802bed : nop
        mov ecx, dword ptr ds : [eax+8]
        push esi
        push ecx
        mov dword ptr ds : [eax], 0xFFFFFFF6
        call public_6802cb0
        add esp, 8
        jmp public_6802c2b
        public_6802c02 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [eax], 0xFFFFFFF8
        cmp dword ptr ds : [ecx+0x10], 0xFFFFFFFB
        push esi
        jne public_6802c1e
        mov edx, dword ptr ds : [ecx+0x18]
        push edx
        push ecx
        call public_6802d40
        jmp public_6802c28
        public_6802c1e : nop
        mov eax, dword ptr ds : [ecx+0x18]
        push eax
        push ecx
        public_6802c23 : nop
        call public_68042e0
        public_6802c28 : nop
        add esp, 0xC
        public_6802c2b : nop
        mov ebx, dword ptr ss : [esp+0x18]
        cmp ebx, 0xFF
        mov ebp, eax
        mov dword ptr ss : [esp+0x14], ebp
        jne public_6802c49
        mov ebx, dword ptr ds : [edi]
        sub ebx, dword ptr ds : [edi+4]
        sar ebx, 4
        sub ebx, ebp
        jmp public_6802c55
        public_6802c49 : nop
        lea ecx, ds:[ebx+ebp]
        push ecx
        call public_6802900
        add esp, 4
        public_6802c55 : nop
        dec esi
        test ebx, ebx
        jle public_6802c9b
        mov ecx, esi
        mov eax, ebp
        shl ecx, 4
        shl eax, 4
        mov dword ptr ss : [esp+0x18], ebx
        public_6802c68 : nop
        mov edx, dword ptr ds : [edi+4]
        lea ebx, ds:[eax+edx]
        mov ebp, dword ptr ds : [ebx]
        add edx, ecx
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [ebx+4]
        mov dword ptr ds : [edx+4], ebp
        mov ebp, dword ptr ds : [ebx+8]
        mov dword ptr ds : [edx+8], ebp
        mov ebx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [edx+0xC], ebx
        mov edx, dword ptr ss : [esp+0x18]
        add eax, 0x10
        add ecx, 0x10
        dec edx
        mov dword ptr ss : [esp+0x18], edx
        jne public_6802c68
        mov ebp, dword ptr ss : [esp+0x14]
        public_6802c9b : nop
        mov eax, dword ptr ds : [edi]
        sub esi, ebp
        shl esi, 4
        add eax, esi
        mov dword ptr ds : [edi], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6802b50)
    }
}

#undef public_6802bbf
#undef public_6802bde
#undef public_6802bed
#undef public_6802c02
#undef public_6802c1e
#undef public_6802c23
#undef public_6802c28
#undef public_6802c2b
#undef public_6802c49
#undef public_6802c55
#undef public_6802c68
#undef public_6802c9b
