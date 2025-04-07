#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4e111);
CLANG_FORWARD_PROC_SYMBOL(public_6d4e28a);

#define public_6d4e2ec _public_6d4e2ec
#define public_6d4e2ef _public_6d4e2ef
#define public_6d4e331 _public_6d4e331
#define public_6d4e346 _public_6d4e346
#define public_6d4e36f _public_6d4e36f
#define public_6d4e372 _public_6d4e372
#define public_6d4e41f _public_6d4e41f
#define public_6d4e4cf _public_6d4e4cf
#define public_6d4e4f5 _public_6d4e4f5

PROC_DECLARE(0x6d4e28a, internal_6d4e28a, public_6d4e28a);
extern "C" NAKED register_t __cdecl internal_6d4e28a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x68
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x1A4]
        mov edx, dword ptr ds : [ecx+0x18]
        push esi
        mov esi, dword ptr ds : [eax+0x11C]
        mov dword ptr ss : [ebp-0x14], esi
        mov esi, dword ptr ds : [ecx+0x28]
        mov dword ptr ss : [ebp-0x4C], edx
        mov edx, dword ptr ds : [eax+0x5C]
        mov eax, dword ptr ds : [eax+0x74]
        mov dword ptr ss : [ebp-0x28], esi
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x58], esi
        mov esi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x60], eax
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        mov dword ptr ss : [ebp-0x68], ecx
        mov dword ptr ss : [ebp-0x40], edx
        mov dword ptr ss : [ebp-0x5C], esi
        jle public_6d4e4f5
        mov esi, dword ptr ss : [ebp+0xC]
        push ebx
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        sub esi, edi
        mov dword ptr ss : [ebp-0x24], edi
        mov dword ptr ss : [ebp-0x48], esi
        mov dword ptr ss : [ebp-0x44], eax
        jmp public_6d4e2ef
        public_6d4e2ec : nop
        mov esi, dword ptr ss : [ebp-0x48]
        public_6d4e2ef : nop
        cmp byte ptr ds : [ecx+0x24], 0
        mov edi, dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ds : [esi+edi]
        mov esi, dword ptr ds : [edi]
        mov dword ptr ss : [ebp-8], eax
        mov dword ptr ss : [ebp-0x10], esi
        je public_6d4e331
        or dword ptr ss : [ebp-0x38], 0xFFFFFFFF
        add eax, edx
        and byte ptr ds : [ecx+0x24], 0
        lea eax, ds:[eax+edx*2-3]
        mov dword ptr ss : [ebp-8], eax
        lea eax, ds:[esi+edx-1]
        mov dword ptr ss : [ebp-0x10], eax
        lea eax, ds:[edx+edx*2+3]
        mov edx, dword ptr ds : [ecx+0x20]
        lea esi, ds:[edx+eax*2]
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-4], 0xFFFFFFFD
        jmp public_6d4e346
        public_6d4e331 : nop
        mov esi, dword ptr ds : [ecx+0x20]
        mov dword ptr ss : [ebp-0x38], 1
        mov dword ptr ss : [ebp-4], 3
        mov byte ptr ds : [ecx+0x24], 1
        public_6d4e346 : nop
        mov edx, dword ptr ss : [ebp-0x40]
        xor ebx, ebx
        and dword ptr ss : [ebp-0x20], ebx
        and dword ptr ss : [ebp-0x1C], ebx
        and dword ptr ss : [ebp-0x18], ebx
        xor edi, edi
        test edx, edx
        mov dword ptr ss : [ebp+0x14], edi
        mov dword ptr ss : [ebp-0x34], edi
        mov dword ptr ss : [ebp-0x30], edi
        mov dword ptr ss : [ebp-0x2C], edi
        jbe public_6d4e4cf
        mov dword ptr ss : [ebp-0x3C], edx
        jmp public_6d4e372
        public_6d4e36f : nop
        mov eax, dword ptr ss : [ebp-8]
        public_6d4e372 : nop
        mov ecx, dword ptr ss : [ebp-4]
        lea ecx, ds:[esi+ecx*2]
        mov dword ptr ss : [ebp-0x64], ecx
        movsx ecx, word ptr ds : [ecx]
        lea edx, ds:[ecx+edi+8]
        movzx edi, byte ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp-0x28]
        sar edx, 4
        mov edx, dword ptr ds : [ecx+edx*4]
        add edx, edi
        mov edi, dword ptr ss : [ebp-0x14]
        movzx edi, byte ptr ds : [edx+edi]
        mov edx, dword ptr ss : [ebp-4]
        movsx edx, word ptr ds : [esi+edx*2+2]
        lea edx, ds:[edx+ebx+8]
        movzx ebx, byte ptr ds : [eax+1]
        movzx eax, byte ptr ds : [eax+2]
        sar edx, 4
        mov ecx, dword ptr ds : [ecx+edx*4]
        mov edx, dword ptr ss : [ebp-0x14]
        add ecx, ebx
        movzx ebx, byte ptr ds : [ecx+edx]
        mov ecx, dword ptr ss : [ebp-4]
        movsx ecx, word ptr ds : [esi+ecx*2+4]
        mov edx, dword ptr ss : [ebp+0x14]
        lea ecx, ds:[ecx+edx+8]
        mov edx, dword ptr ss : [ebp-0x28]
        sar ecx, 4
        mov ecx, dword ptr ds : [edx+ecx*4]
        add ecx, eax
        mov eax, dword ptr ss : [ebp-0x14]
        movzx eax, byte ptr ds : [ecx+eax]
        mov dword ptr ss : [ebp-0xC], ebx
        sar dword ptr ss : [ebp-0xC], 2
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp+0x14], eax
        sar eax, 3
        shl edx, 5
        add edx, eax
        mov dword ptr ss : [ebp-0x50], eax
        mov eax, dword ptr ss : [ebp-0x4C]
        mov ecx, edi
        sar ecx, 3
        mov eax, dword ptr ds : [eax+ecx*4]
        lea eax, ds:[eax+edx*2]
        cmp word ptr ds : [eax], 0
        mov dword ptr ss : [ebp-0x54], eax
        jne public_6d4e41f
        push dword ptr ss : [ebp-0x50]
        mov eax, dword ptr ss : [ebp-0xC]
        push ecx
        push dword ptr ss : [ebp+8]
        call public_6d4e111
        mov eax, dword ptr ss : [ebp-0x54]
        add esp, 0xC
        public_6d4e41f : nop
        movzx eax, word ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp-0x10]
        dec eax
        mov byte ptr ds : [ecx], al
        mov ecx, dword ptr ss : [ebp-0x58]
        movzx ecx, byte ptr ds : [eax+ecx]
        mov edx, dword ptr ss : [ebp-0x18]
        sub edi, ecx
        mov ecx, dword ptr ss : [ebp-0x5C]
        movzx ecx, byte ptr ds : [eax+ecx]
        sub ebx, ecx
        mov ecx, dword ptr ss : [ebp-0x60]
        movzx ecx, byte ptr ds : [eax+ecx]
        mov eax, dword ptr ss : [ebp+0x14]
        sub eax, ecx
        mov dword ptr ss : [ebp+0x14], edi
        lea ecx, ds:[edi+edi]
        add edi, ecx
        add edx, edi
        mov word ptr ds : [esi], dx
        mov edx, dword ptr ss : [ebp-0x2C]
        add edi, ecx
        add edx, edi
        mov dword ptr ss : [ebp-0x18], edx
        mov edx, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp-0x2C], edx
        mov edx, dword ptr ss : [ebp-0x1C]
        add edi, ecx
        mov dword ptr ss : [ebp+0x14], ebx
        lea ecx, ds:[ebx+ebx]
        add ebx, ecx
        add edx, ebx
        mov word ptr ds : [esi+2], dx
        mov edx, dword ptr ss : [ebp-0x30]
        add ebx, ecx
        add edx, ebx
        mov dword ptr ss : [ebp-0x1C], edx
        mov edx, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp+0x14], eax
        mov dword ptr ss : [ebp-0x30], edx
        mov edx, dword ptr ss : [ebp-0x20]
        add ebx, ecx
        lea ecx, ds:[eax+eax]
        add eax, ecx
        add edx, eax
        mov word ptr ds : [esi+4], dx
        mov edx, dword ptr ss : [ebp-0x34]
        mov esi, dword ptr ss : [ebp-0x64]
        add eax, ecx
        add edx, eax
        add eax, ecx
        mov dword ptr ss : [ebp-0x20], edx
        mov edx, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp+0x14], eax
        mov eax, dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ss : [ebp-0x38]
        add dword ptr ss : [ebp-0x10], eax
        dec dword ptr ss : [ebp-0x3C]
        mov dword ptr ss : [ebp-0x34], edx
        jne public_6d4e36f
        mov ecx, dword ptr ss : [ebp-0x68]
        mov edx, dword ptr ss : [ebp-0x40]
        public_6d4e4cf : nop
        mov ax, word ptr ss : [ebp-0x18]
        add dword ptr ss : [ebp-0x24], 4
        dec dword ptr ss : [ebp-0x44]
        mov word ptr ds : [esi], ax
        mov ax, word ptr ss : [ebp-0x1C]
        mov word ptr ds : [esi+2], ax
        mov ax, word ptr ss : [ebp-0x20]
        mov word ptr ds : [esi+4], ax
        jne public_6d4e2ec
        pop edi
        pop ebx
        public_6d4e4f5 : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4e28a)
    }
}

#undef public_6d4e2ec
#undef public_6d4e2ef
#undef public_6d4e331
#undef public_6d4e346
#undef public_6d4e36f
#undef public_6d4e372
#undef public_6d4e41f
#undef public_6d4e4cf
#undef public_6d4e4f5
