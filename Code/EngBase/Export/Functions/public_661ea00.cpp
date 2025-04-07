#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661ea00);

#define public_661ea50 _public_661ea50
#define public_661ea92 _public_661ea92

PROC_DECLARE(0x661ea00, internal_661ea00, public_661ea00);
extern "C" NAKED register_t __cdecl internal_661ea00()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        xor esi, esi
        push edi
        push esi
        mov byte ptr ss : [ebp], al
        call dword ptr ds : [public_6629024]
        mov cl, byte ptr ss : [esp+0x18]
        mov dl, byte ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp+0x10], esi
        mov byte ptr ss : [ebp+0x18], cl
        mov dword ptr ss : [ebp+0x1C], esi
        mov dword ptr ss : [ebp+0x20], esi
        mov dword ptr ss : [ebp+0x24], esi
        mov byte ptr ss : [ebp+0x28], dl
        mov dword ptr ss : [ebp+0x2C], esi
        mov dword ptr ss : [ebp+0x30], esi
        mov dword ptr ss : [ebp+0x34], esi
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        jne public_661ea50
        mov dword ptr ss : [esp+0x10], offset public_662ace4
        public_661ea50 : nop
        mov edi, dword ptr ss : [esp+0x10]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push 1
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        mov ecx, ebp
        push ebx
        call dword ptr ds : [public_6629020]
        test al, al
        je public_661ea92
        mov esi, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebx
        xor esi, esi
        mov byte ptr ds : [ebx+eax], 0
        public_661ea92 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov eax, ebp
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp+0x14], esi
        mov dword ptr ss : [ebp+0x10], edx
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x661ea00)
    }
}

#undef public_661ea50
#undef public_661ea92
