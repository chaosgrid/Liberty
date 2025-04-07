#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fc0);
CLANG_FORWARD_PROC_SYMBOL(public_63522a0);
CLANG_FORWARD_PROC_SYMBOL(public_636b190);
CLANG_FORWARD_PROC_SYMBOL(public_636b520);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63987ab);

#define public_636b1d1 _public_636b1d1
#define public_636b1ed _public_636b1ed
#define public_636b204 _public_636b204
#define public_636b220 _public_636b220
#define public_636b25e _public_636b25e
#define public_636b27e _public_636b27e
#define public_636b28d _public_636b28d
#define public_636b299 _public_636b299
#define public_636b2cb _public_636b2cb
#define public_636b2cd _public_636b2cd
#define public_636b2ee _public_636b2ee
#define public_636b2f4 _public_636b2f4
#define public_636b329 _public_636b329
#define public_636b32b _public_636b32b

PROC_DECLARE(0x636b190, internal_636b190, public_636b190);
extern "C" NAKED register_t __cdecl internal_636b190()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63987ab @0x636b192*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63987ab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x6C]
        mov ecx, dword ptr ds : [eax+8]
        push edi
        xor edi, edi
        xor ebp, ebp
        cmp ecx, edi
        mov dword ptr ss : [esp+0x10], edi
        jne public_636b1ed
        xor ebx, ebx
        mov bx, word ptr ds : [esi+0x2A]
        cmp ebx, edi
        jle public_636b1ed
        mov edx, dword ptr ds : [esi+0x2C]
        mov dword ptr ss : [esp+0x10], ebx
        public_636b1d1 : nop
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ds : [ecx+8]
        movsx ecx, word ptr ds : [ecx+0xC]
        shr eax, 8
        shl eax, 4
        add ebp, eax
        add edi, ecx
        add edx, 4
        dec ebx
        jne public_636b1d1
        public_636b1ed : nop
        xor ebx, ebx
        mov bx, word ptr ds : [esi+0x22]
        test ebx, ebx
        jle public_636b220
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+0x24]
        add eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        public_636b204 : nop
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ds : [ecx+8]
        shr eax, 8
        shl eax, 4
        add ebp, eax
        movsx eax, word ptr ds : [ecx+0xC]
        add edi, eax
        add edx, 4
        dec ebx
        jne public_636b204
        public_636b220 : nop
        mov eax, dword ptr ds : [esi+8]
        lea ebx, ds:[eax*8]
        sub ebx, eax
        shl ebx, 2
        lea eax, ds:[ebx+ebp+0x3F]
        and eax, 0xFFFFFFF0
        push 0x10
        push eax
        call public_6343fc0
        xor edx, edx
        add esp, 8
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jne public_636b25e
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        public_636b25e : nop
        cmp dword ptr ss : [esp+0x10], 1
        jle public_636b2ee
        mov eax, dword ptr ds : [esi+0x6C]
        cmp dword ptr ds : [eax+8], edx
        jne public_636b2ee
        mov eax, dword ptr ds : [eax+0xC]
        cmp eax, 1
        je public_636b27e
        cmp eax, 2
        jne public_636b2f4
        public_636b27e : nop
        cmp edi, edx
        mov ecx, 2
        mov eax, edi
        mov dword ptr ss : [esp+0x14], ecx
        je public_636b299
        public_636b28d : nop
        sar eax, 1
        shl ecx, 1
        cmp eax, edx
        jne public_636b28d
        mov dword ptr ss : [esp+0x14], ecx
        public_636b299 : nop
        push 0x10
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        test eax, eax
        mov dword ptr ss : [esp+0x24], 0
        je public_636b2cb
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, eax
        call public_63522a0
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], offset public_63a58f8
        jmp public_636b2cd
        public_636b2cb : nop
        xor eax, eax
        public_636b2cd : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [esi+0x7C], eax
        lea eax, ds:[edx+edi+3]
        shl eax, 4
        add eax, ecx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x74], eax
        xor edx, edx
        jmp public_636b2f4
        public_636b2ee : nop
        mov dword ptr ds : [esi+0x74], edx
        mov dword ptr ds : [esi+0x7C], edx
        public_636b2f4 : nop
        mov ecx, dword ptr ds : [esi]
        add ecx, 0x30
        mov dword ptr ds : [esi+0x70], ecx
        mov ecx, esi
        mov dword ptr ds : [esi+0x78], edx
        call public_636b520
        mov ecx, dword ptr ds : [esi+0x7C]
        xor edx, edx
        cmp ecx, edx
        je public_636b329
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [esi+0x78]
        add eax, dword ptr ss : [esp+0x10]
        xor edx, edx
        add eax, edi
        mov dword ptr ds : [esi+0x7C], edx
        shl eax, 4
        jmp public_636b32b
        public_636b329 : nop
        mov eax, ebp
        public_636b32b : nop
        mov ecx, dword ptr ds : [esi]
        lea edi, ds:[eax+ebx+0x30]
        mov ebx, dword ptr ds : [ecx+0x1C]
        shl edi, 8
        and ebx, 0xFF
        or edi, ebx
        mov dword ptr ds : [ecx+0x1C], edi
        mov ecx, dword ptr ds : [esi]
        add eax, 0x30
        mov dword ptr ds : [ecx+0x20], eax
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x24], edx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x28], edx
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x2C], edx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x20]
        add ecx, eax
        pop edi
        mov dword ptr ds : [esi+0x80], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x636b190)
    }
}

#undef public_636b1d1
#undef public_636b1ed
#undef public_636b204
#undef public_636b220
#undef public_636b25e
#undef public_636b27e
#undef public_636b28d
#undef public_636b299
#undef public_636b2cb
#undef public_636b2cd
#undef public_636b2ee
#undef public_636b2f4
#undef public_636b329
#undef public_636b32b
