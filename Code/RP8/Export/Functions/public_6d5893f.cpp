#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5893f);

#define public_6d58976 _public_6d58976
#define public_6d589ca _public_6d589ca
#define public_6d58a38 _public_6d58a38
#define public_6d58a3b _public_6d58a3b
#define public_6d58a5e _public_6d58a5e
#define public_6d58a89 _public_6d58a89
#define public_6d58ae5 _public_6d58ae5

PROC_DECLARE(0x6d5893f, internal_6d5893f, public_6d5893f);
extern "C" NAKED register_t __cdecl internal_6d5893f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x48
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        mov ebx, dword ptr ds : [eax+0x11C]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+0x50]
        push esi
        mov esi, dword ptr ss : [ebp+0x10]
        push edi
        add ebx, 0x80
        lea edi, ss:[ebp-0x48]
        add esi, 0x30
        mov dword ptr ss : [ebp-8], ebx
        mov dword ptr ss : [ebp-4], edi
        mov dword ptr ss : [ebp+8], 8
        add ecx, 0x30
        public_6d58976 : nop
        cmp dword ptr ss : [ebp+8], 6
        je public_6d58a3b
        cmp dword ptr ss : [ebp+8], 4
        je public_6d58a3b
        cmp dword ptr ss : [ebp+8], 2
        je public_6d58a3b
        xor eax, eax
        mov ax, word ptr ds : [esi+0x40]
        xor edx, edx
        mov dx, word ptr ds : [esi+0x20]
        or eax, edx
        mov edx, eax
        xor eax, eax
        mov ax, word ptr ds : [esi-0x20]
        or edx, eax
        xor eax, eax
        mov ax, word ptr ds : [esi]
        or edx, eax
        movsx eax, word ptr ds : [ecx-0x30]
        test dx, dx
        movsx edx, word ptr ds : [esi-0x30]
        jne public_6d589ca
        imul eax, edx
        shl eax, 2
        mov dword ptr ds : [edi], eax
        jmp public_6d58a38
        public_6d589ca : nop
        mov di, word ptr ds : [ecx+0x40]
        imul eax, edx
        imul di, word ptr ds : [esi+0x40]
        mov dx, word ptr ds : [ecx+0x20]
        imul dx, word ptr ds : [esi+0x20]
        movsx edi, di
        imul edi, 0x1712
        movsx edx, dx
        imul edx, 0x1B37
        sub edx, edi
        mov di, word ptr ds : [ecx-0x20]
        imul di, word ptr ds : [esi-0x20]
        movsx edi, di
        imul edi, 0x73FC
        add edx, edi
        mov di, word ptr ds : [ecx]
        imul di, word ptr ds : [esi]
        movsx edi, di
        imul edi, 0x28BA
        shl eax, 0xF
        sub edx, edi
        mov edi, dword ptr ss : [ebp-4]
        lea ebx, ds:[edx+eax+0x1000]
        sar ebx, 0xD
        sub eax, edx
        add eax, 0x1000
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ss : [ebp-8]
        sar eax, 0xD
        public_6d58a38 : nop
        mov dword ptr ds : [edi+0x20], eax
        public_6d58a3b : nop
        inc esi
        inc esi
        inc ecx
        add edi, 4
        inc ecx
        dec dword ptr ss : [ebp+8]
        cmp dword ptr ss : [ebp+8], 0
        mov dword ptr ss : [ebp-4], edi
        jg public_6d58976
        and dword ptr ss : [ebp+8], 0
        lea eax, ss:[ebp-0x48]
        mov edx, 0x3FF
        public_6d58a5e : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        mov esi, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [ecx+esi*4]
        mov ecx, dword ptr ds : [eax+0x1C]
        or ecx, dword ptr ds : [eax+0xC]
        add edi, dword ptr ss : [ebp+0x18]
        or ecx, dword ptr ds : [eax+4]
        or ecx, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [eax]
        jne public_6d58a89
        add ecx, 0x10
        sar ecx, 5
        and ecx, edx
        mov cl, byte ptr ds : [ecx+ebx]
        mov byte ptr ds : [edi], cl
        jmp public_6d58ae5
        public_6d58a89 : nop
        movsx ebx, word ptr ds : [eax+0x1C]
        movsx esi, word ptr ds : [eax+0xC]
        imul ebx, 0x1712
        imul esi, 0xFFFFD746
        sub esi, ebx
        movsx ebx, word ptr ds : [eax+4]
        imul ebx, 0x73FC
        add esi, ebx
        movsx ebx, word ptr ds : [eax+0x14]
        imul ebx, 0x1B37
        shl ecx, 0xF
        add esi, ebx
        lea ebx, ds:[esi+ecx+0x80000]
        sar ebx, 0x14
        and ebx, edx
        mov edx, ebx
        mov ebx, dword ptr ss : [ebp-8]
        mov dl, byte ptr ds : [edx+ebx]
        sub ecx, esi
        add ecx, 0x80000
        mov byte ptr ds : [edi], dl
        sar ecx, 0x14
        mov edx, 0x3FF
        and ecx, edx
        mov cl, byte ptr ds : [ecx+ebx]
        public_6d58ae5 : nop
        add eax, 0x20
        inc dword ptr ss : [ebp+8]
        cmp dword ptr ss : [ebp+8], 2
        mov byte ptr ds : [edi+1], cl
        jl public_6d58a5e
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d5893f)
    }
}

#undef public_6d58976
#undef public_6d589ca
#undef public_6d58a38
#undef public_6d58a3b
#undef public_6d58a5e
#undef public_6d58a89
#undef public_6d58ae5
