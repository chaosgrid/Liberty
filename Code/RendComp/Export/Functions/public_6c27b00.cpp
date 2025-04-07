#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c27aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6c27b00);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c27b36 _public_6c27b36
#define public_6c27b74 _public_6c27b74
#define public_6c27b88 _public_6c27b88

PROC_DECLARE(0x6c27b00, internal_6c27b00, public_6c27b00);
extern "C" NAKED register_t __cdecl internal_6c27b00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        lea eax, ds:[eax+eax*2]
        mov esi, ecx
        mov dword ptr ds : [esi+0x1C], eax
        add eax, eax
        push eax
        call public_6c34eac
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x18], eax
        mov eax, 0xAAAAAAAB
        mul dword ptr ds : [ecx+0x1C]
        shr edx, 1
        add esp, 4
        xor ebp, ebp
        test edx, edx
        jbe public_6c27b88
        push ebx
        push edi
        xor ebx, ebx
        xor edi, edi
        public_6c27b36 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        cmp dword ptr ds : [eax+ebp*4], edx
        jne public_6c27b74
        mov edx, dword ptr ds : [ecx+0x18]
        mov dx, word ptr ds : [edi+edx]
        mov eax, dword ptr ds : [esi+0x18]
        mov word ptr ds : [ebx+eax], dx
        mov eax, dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ds : [esi+0x18]
        mov ax, word ptr ds : [eax+edi+2]
        mov word ptr ds : [edx+ebx+2], ax
        mov edx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [esi+0x18]
        mov dx, word ptr ds : [edx+edi+4]
        mov word ptr ds : [eax+ebx+4], dx
        add ebx, 6
        public_6c27b74 : nop
        mov eax, 0xAAAAAAAB
        mul dword ptr ds : [ecx+0x1C]
        inc ebp
        shr edx, 1
        add edi, 6
        cmp ebp, edx
        jb public_6c27b36
        pop edi
        pop ebx
        public_6c27b88 : nop
        mov ecx, esi
        call public_6c27aa0
        pop esi
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6c27b00)
    }
}

#undef public_6c27b36
#undef public_6c27b74
#undef public_6c27b88
