#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5862a);

#define public_6d58667 _public_6d58667
#define public_6d586cd _public_6d586cd
#define public_6d587d6 _public_6d587d6
#define public_6d587d9 _public_6d587d9
#define public_6d587fd _public_6d587fd
#define public_6d5883f _public_6d5883f
#define public_6d58927 _public_6d58927

PROC_DECLARE(0x6d5862a, internal_6d5862a, public_6d5862a);
extern "C" NAKED register_t __cdecl internal_6d5862a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x98
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+0x11C]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+0x50]
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0x10]
        push edi
        add edx, 0x80
        add esi, 0x60
        lea edi, ss:[ebp-0x78]
        mov dword ptr ss : [ebp-0xC], edx
        mov dword ptr ss : [ebp+8], 8
        mov dword ptr ss : [ebp-0x10], edi
        mov dword ptr ss : [ebp-0x14], esi
        add ecx, 0x60
        public_6d58667 : nop
        cmp dword ptr ss : [ebp+8], 4
        je public_6d587d9
        mov bx, word ptr ds : [esi-0x10]
        mov ax, word ptr ds : [esi+0x10]
        mov word ptr ss : [ebp+0x10], ax
        xor eax, eax
        mov ax, word ptr ds : [esi]
        mov word ptr ss : [ebp+0xC], bx
        mov bx, word ptr ds : [esi-0x30]
        mov word ptr ss : [ebp-4], bx
        xor ebx, ebx
        mov bx, word ptr ds : [esi-0x50]
        mov dword ptr ss : [ebp-0x18], eax
        or eax, ebx
        or eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-8], ebx
        or eax, dword ptr ss : [ebp+0xC]
        xor ebx, ebx
        mov bx, word ptr ds : [esi-0x40]
        or eax, dword ptr ss : [ebp+0x10]
        or eax, ebx
        test ax, ax
        movsx eax, word ptr ds : [ecx-0x60]
        jne public_6d586cd
        movsx ebx, word ptr ds : [esi-0x60]
        imul eax, ebx
        shl eax, 2
        mov dword ptr ds : [edi-0x20], eax
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+0x40], eax
        jmp public_6d587d6
        public_6d586cd : nop
        movsx edx, word ptr ds : [esi-0x60]
        mov si, word ptr ds : [ecx]
        imul eax, edx
        imul si, word ptr ss : [ebp-0x18]
        mov dx, word ptr ds : [ecx-0x40]
        imul dx, bx
        movsx edi, word ptr ss : [ebp+0x10]
        movsx ebx, word ptr ss : [ebp+0xC]
        movsx edx, dx
        movsx esi, si
        imul edx, 0x3B21
        imul esi, 0x187E
        sub edx, esi
        shl eax, 0xE
        lea esi, ds:[edx+eax]
        sub eax, edx
        movsx edx, word ptr ds : [ecx+0x10]
        imul edx, edi
        movsx edi, word ptr ds : [ecx-0x10]
        imul edi, ebx
        movsx ebx, word ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0xC], edi
        movsx edi, word ptr ds : [ecx-0x30]
        imul edi, ebx
        movsx ebx, word ptr ss : [ebp-8]
        mov dword ptr ss : [ebp+0x10], edi
        movsx edi, word ptr ds : [ecx-0x50]
        imul edi, ebx
        movsx ebx, word ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+0xC], ebx
        mov dword ptr ss : [ebp-8], edi
        movsx edi, word ptr ss : [ebp+0x10]
        movsx ebx, word ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-4], ebx
        imul ebx, 0x21F9
        movsx edx, dx
        mov dword ptr ss : [ebp+0x10], edx
        mov edx, dword ptr ss : [ebp+0xC]
        imul edx, 0x2E75
        add edx, ebx
        mov ebx, dword ptr ss : [ebp+0x10]
        imul ebx, 0x6C2
        sub edx, ebx
        mov ebx, edi
        imul edi, 0x1CCD
        imul ebx, 0x4587
        sub edx, ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        imul ebx, 0x133E
        sub edi, ebx
        mov ebx, dword ptr ss : [ebp+0x10]
        imul ebx, 0x1050
        sub edi, ebx
        mov ebx, dword ptr ss : [ebp-4]
        imul ebx, 0x5203
        add edi, ebx
        lea ebx, ds:[esi+edi+0x800]
        mov dword ptr ss : [ebp+0x10], edi
        sub esi, dword ptr ss : [ebp+0x10]
        mov edi, dword ptr ss : [ebp-0x10]
        sar ebx, 0xC
        mov dword ptr ds : [edi-0x20], ebx
        mov ebx, 0x800
        add esi, ebx
        sar esi, 0xC
        mov dword ptr ds : [edi+0x40], esi
        lea esi, ds:[eax+edx+0x800]
        sub eax, edx
        mov edx, dword ptr ss : [ebp-0xC]
        sar esi, 0xC
        add eax, ebx
        mov dword ptr ds : [edi], esi
        mov esi, dword ptr ss : [ebp-0x14]
        sar eax, 0xC
        public_6d587d6 : nop
        mov dword ptr ds : [edi+0x20], eax
        public_6d587d9 : nop
        inc esi
        inc esi
        inc ecx
        add edi, 4
        inc ecx
        dec dword ptr ss : [ebp+8]
        cmp dword ptr ss : [ebp+8], 0
        mov dword ptr ss : [ebp-0x14], esi
        mov dword ptr ss : [ebp-0x10], edi
        jg public_6d58667
        and dword ptr ss : [ebp+8], 0
        lea ecx, ss:[ebp-0x98]
        public_6d587fd : nop
        mov esi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [eax+esi*4]
        mov esi, dword ptr ds : [ecx+0xC]
        mov edi, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx+0x14]
        add eax, dword ptr ss : [ebp+0x18]
        or edi, esi
        or edi, ebx
        or edi, dword ptr ds : [ecx+0x1C]
        or edi, dword ptr ds : [ecx+0x18]
        or edi, dword ptr ds : [ecx+8]
        jne public_6d5883f
        mov esi, dword ptr ds : [ecx]
        add esi, 0x10
        sar esi, 5
        and esi, 0x3FF
        mov bl, byte ptr ds : [esi+edx]
        mov byte ptr ds : [eax], bl
        mov byte ptr ds : [eax+1], bl
        mov byte ptr ds : [eax+3], bl
        jmp public_6d58927
        public_6d5883f : nop
        movsx edi, word ptr ds : [ecx+0x18]
        movsx esi, word ptr ds : [ecx+8]
        imul edi, 0x187E
        mov edx, dword ptr ds : [ecx]
        imul esi, 0x3B21
        sub esi, edi
        shl edx, 0xE
        lea edi, ds:[esi+edx]
        sub edx, esi
        movsx esi, bx
        movsx ebx, word ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-4], ebx
        movsx ebx, word ptr ds : [ecx+0x1C]
        mov dword ptr ss : [ebp+0x10], ebx
        mov ebx, dword ptr ss : [ebp-4]
        imul ebx, 0x21F9
        mov dword ptr ss : [ebp+0xC], esi
        imul esi, 0x2E75
        add esi, ebx
        mov ebx, dword ptr ss : [ebp+0x10]
        imul ebx, 0x6C2
        sub esi, ebx
        mov dword ptr ss : [ebp-8], edx
        movsx edx, word ptr ds : [ecx+0xC]
        mov ebx, edx
        imul edx, 0x1CCD
        imul ebx, 0x4587
        sub esi, ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        imul ebx, 0x133E
        sub edx, ebx
        mov ebx, dword ptr ss : [ebp+0x10]
        imul ebx, 0x1050
        sub edx, ebx
        mov ebx, dword ptr ss : [ebp-4]
        imul ebx, 0x5203
        add edx, ebx
        lea ebx, ds:[edi+edx+0x40000]
        sar ebx, 0x13
        mov dword ptr ss : [ebp+0x10], edx
        sub edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp-0xC]
        and ebx, 0x3FF
        mov bl, byte ptr ds : [ebx+edx]
        add edi, 0x40000
        sar edi, 0x13
        and edi, 0x3FF
        mov byte ptr ds : [eax], bl
        mov bl, byte ptr ds : [edi+edx]
        mov edi, dword ptr ss : [ebp-8]
        mov byte ptr ds : [eax+3], bl
        lea ebx, ds:[edi+esi+0x40000]
        sar ebx, 0x13
        sub edi, esi
        and ebx, 0x3FF
        mov bl, byte ptr ds : [ebx+edx]
        add edi, 0x40000
        sar edi, 0x13
        and edi, 0x3FF
        mov byte ptr ds : [eax+1], bl
        mov bl, byte ptr ds : [edi+edx]
        public_6d58927 : nop
        add ecx, 0x20
        inc dword ptr ss : [ebp+8]
        cmp dword ptr ss : [ebp+8], 4
        mov byte ptr ds : [eax+2], bl
        jl public_6d587fd
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d5862a)
    }
}

#undef public_6d58667
#undef public_6d586cd
#undef public_6d587d6
#undef public_6d587d9
#undef public_6d587fd
#undef public_6d5883f
#undef public_6d58927
