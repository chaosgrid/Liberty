#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a2a40);
CLANG_FORWARD_PROC_SYMBOL(public_5a2ee0);

#define public_5a2a64 _public_5a2a64
#define public_5a2aab _public_5a2aab
#define public_5a2ad8 _public_5a2ad8

PROC_DECLARE(0x5a2a40, internal_5a2a40, public_5a2a40);
extern "C" NAKED register_t __cdecl internal_5a2a40()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        add eax, 0xC
        cmp eax, 0x1800
        push edi
        jge public_5a2a64
        mov ecx, dword ptr ds : [esi+0x1C]
        add ecx, 8
        cmp ecx, 0xC00
        jl public_5a2ad8
        public_5a2a64 : nop
        mov ecx, offset public_67dd90
        call public_5a2ee0
        mov ecx, offset public_67dd68
        call public_5a2ee0
        mov cl, byte ptr ds : [public_67ddb4]
        xor eax, eax
        cmp cl, al
        je public_5a2aab
        mov edx, dword ptr ds : [public_67dd9c]
        mov ecx, dword ptr ds : [public_67dda0]
        mov byte ptr ds : [public_67ddb4], al
        mov dword ptr ds : [public_67ddac], eax
        mov dword ptr ds : [public_67ddb0], eax
        mov dword ptr ds : [public_67dda4], edx
        mov dword ptr ds : [public_67dda8], ecx
        public_5a2aab : nop
        cmp byte ptr ds : [public_67dd8c], al
        je public_5a2ad8
        mov edx, dword ptr ds : [public_67dd74]
        mov byte ptr ds : [public_67dd8c], al
        mov dword ptr ds : [public_67dd84], eax
        mov dword ptr ds : [public_67dd88], eax
        mov eax, dword ptr ds : [public_67dd78]
        mov dword ptr ds : [public_67dd7c], edx
        mov dword ptr ds : [public_67dd80], eax
        public_5a2ad8 : nop
        mov ecx, dword ptr ds : [esi+0x18]
        mov ebp, dword ptr ds : [esi+0x20]
        mov dx, word ptr ds : [esi+0x1C]
        mov eax, 2
        add ebp, 0xC
        mov dword ptr ds : [esi+0x20], ebp
        mov word ptr ds : [ecx], dx
        mov ebx, dword ptr ds : [esi+0x18]
        mov dx, word ptr ds : [esi+0x1C]
        add ebx, eax
        mov dword ptr ds : [esi+0x18], ebx
        inc dx
        mov ecx, ebx
        mov word ptr ds : [ecx], dx
        mov ecx, dword ptr ds : [esi+0x18]
        mov dx, word ptr ds : [esi+0x1C]
        add dx, ax
        add ecx, eax
        mov dword ptr ds : [esi+0x18], ecx
        mov word ptr ds : [ecx], dx
        mov ebx, dword ptr ds : [esi+0x18]
        mov dx, word ptr ds : [esi+0x1C]
        add dx, ax
        add ebx, eax
        mov dword ptr ds : [esi+0x18], ebx
        mov ecx, ebx
        mov word ptr ds : [ecx], dx
        mov ecx, dword ptr ds : [esi+0x18]
        mov dx, word ptr ds : [esi+0x1C]
        add ecx, eax
        mov dword ptr ds : [esi+0x18], ecx
        add dx, 3
        mov word ptr ds : [ecx], dx
        mov ebx, dword ptr ds : [esi+0x18]
        mov dx, word ptr ds : [esi+0x1C]
        add ebx, eax
        mov dword ptr ds : [esi+0x18], ebx
        inc dx
        mov ecx, ebx
        mov word ptr ds : [ecx], dx
        mov ecx, dword ptr ds : [esi+0x18]
        mov dx, word ptr ds : [esi+0x1C]
        add ecx, eax
        mov dword ptr ds : [esi+0x18], ecx
        add dx, 4
        mov word ptr ds : [ecx], dx
        mov ebx, dword ptr ds : [esi+0x18]
        mov dx, word ptr ds : [esi+0x1C]
        add dx, 5
        add ebx, eax
        mov dword ptr ds : [esi+0x18], ebx
        mov ecx, ebx
        mov word ptr ds : [ecx], dx
        mov ecx, dword ptr ds : [esi+0x18]
        mov dx, word ptr ds : [esi+0x1C]
        add ecx, eax
        mov dword ptr ds : [esi+0x18], ecx
        add dx, 6
        mov word ptr ds : [ecx], dx
        mov ebx, dword ptr ds : [esi+0x18]
        mov dx, word ptr ds : [esi+0x1C]
        add ebx, eax
        mov dword ptr ds : [esi+0x18], ebx
        add dx, 6
        mov ecx, ebx
        mov word ptr ds : [ecx], dx
        mov ecx, dword ptr ds : [esi+0x18]
        mov dx, word ptr ds : [esi+0x1C]
        add ecx, eax
        mov dword ptr ds : [esi+0x18], ecx
        add dx, 7
        mov word ptr ds : [ecx], dx
        mov ebx, dword ptr ds : [esi+0x18]
        mov dx, word ptr ds : [esi+0x1C]
        add ebx, eax
        mov ecx, ebx
        add dx, 5
        mov dword ptr ds : [esi+0x18], ebx
        mov word ptr ds : [ecx], dx
        mov ecx, dword ptr ds : [esi+0x18]
        add ecx, eax
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [esi+0x18], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        add eax, 8
        mov dword ptr ds : [esi+0x1C], eax
        mov eax, dword ptr ss : [esp+0x30]
        fld dword ptr ds : [eax]
        mov edx, ecx
        fsub dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx]
        fld dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x1C], edi
        fsub dword ptr ds : [ecx+4]
        mov edi, dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x20], edi
        fpatan 
        mov edx, eax
        mov edi, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], edi
        mov edi, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x14], edi
        mov edi, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, ecx
        mov ebp, dword ptr ds : [edx]
        mov dword ptr ds : [edi], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+4], ebp
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+8], edx
        mov edi, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edi+0xC], edx
        mov ebp, dword ptr ds : [esi+0x14]
        add ebp, 0x10
        mov dword ptr ds : [esi+0x14], ebp
        mov edi, ebp
        fadd qword ptr ds : [public_5d3e88]
        fld st(0)
        fsin 
        fxch 
        fcos 
        fstp dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x1C]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x30]
        mov dword ptr ds : [edi], ebp
        fmul dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x20]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi+4], ebp
        fld st(1)
        fadd dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+8], ebx
        mov edi, dword ptr ds : [esi+0x14]
        mov ebx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edi+0xC], ebx
        fstp dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [esi+0x14]
        fld dword ptr ss : [esp+0x14]
        add edi, 0x10
        fadd st, st(1)
        mov dword ptr ds : [esi+0x14], edi
        mov ebx, eax
        mov ebp, dword ptr ds : [ebx]
        fstp dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi], ebp
        mov ebp, dword ptr ds : [ebx+4]
        mov dword ptr ds : [edi+4], ebp
        mov ebx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [edi+8], ebx
        mov edi, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+0xC], edx
        mov ebp, dword ptr ds : [esi+0x14]
        mov ebx, 0x10
        add ebp, ebx
        mov dword ptr ds : [esi+0x14], ebp
        mov edi, ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+4], ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi+8], ebp
        mov edi, dword ptr ds : [esi+0x14]
        mov ebp, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edi+0xC], ebp
        mov edi, dword ptr ds : [esi+0x14]
        add edi, ebx
        mov dword ptr ds : [esi+0x14], edi
        mov ebx, ecx
        mov ebp, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x1C], ebp
        fld dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ds : [ebx+4]
        fsub st, st(2)
        mov ebx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x20], ebp
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        mov ebx, eax
        mov ebp, dword ptr ds : [ebx]
        fsub st, st(1)
        mov dword ptr ss : [esp+0x10], ebp
        mov ebp, dword ptr ds : [ebx+4]
        mov ebx, dword ptr ds : [ebx+8]
        fstp dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], ebx
        fld dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [ecx]
        fsub st, st(2)
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ds : [esi+0x14]
        mov edi, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx+0xC], edx
        mov ecx, dword ptr ds : [esi+0x14]
        mov ebx, 0x10
        add ecx, ebx
        mov dword ptr ds : [esi+0x14], ecx
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx+4], edi
        mov edi, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx+8], edi
        mov ecx, dword ptr ds : [esi+0x14]
        mov edi, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [ecx+0xC], edi
        mov dword ptr ss : [esp+0x14], ebp
        fld dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [esi+0x14]
        fsub st, st(1)
        add ebp, ebx
        mov dword ptr ds : [esi+0x14], ebp
        mov ecx, ebp
        fstp dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebp
        fstp st(0)
        mov ebp, dword ptr ds : [eax+4]
        fstp st(0)
        mov dword ptr ds : [ecx+4], ebp
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [ecx+0xC], edx
        mov ecx, dword ptr ds : [esi+0x14]
        add ecx, ebx
        mov dword ptr ds : [esi+0x14], ecx
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax+0xC], edi
        mov eax, dword ptr ds : [esi+0x14]
        add eax, ebx
        pop edi
        mov dword ptr ds : [esi+0x14], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x14
        UNREACHABLE_TRAP(0x5a2a40)
    }
}

#undef public_5a2a64
#undef public_5a2aab
#undef public_5a2ad8
