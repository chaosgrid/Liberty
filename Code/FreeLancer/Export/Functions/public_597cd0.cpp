#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_597cd0);

PROC_DECLARE(0x597cd0, internal_597cd0, public_597cd0);
extern "C" NAKED register_t __cdecl internal_597cd0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        lea edi, ds:[esi+0x3C]
        mov ecx, edi
        mov dword ptr ds : [esi+0x14], ebx
        mov byte ptr ds : [esi+0x18], bl
        call public_4215b0
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov al, byte ptr ds : [esi+0x6C]
        mov dword ptr ds : [esi], offset public_5d5544
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x70], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x74], ebx
        mov dword ptr ds : [esi+0x78], ebx
        mov dl, byte ptr ss : [esp+0xF]
        and al, 0xF8
        or al, 8
        mov byte ptr ds : [esi+0x6C], al
        mov ecx, dword ptr ds : [public_67dcd4]
        mov al, byte ptr ss : [esp+0xF]
        inc ecx
        mov dword ptr ds : [public_67dcd4], ecx
        mov dword ptr ds : [esi+0x88], ebx
        mov dword ptr ds : [esi+0x8C], ebx
        mov dword ptr ds : [esi+0x90], ebx
        mov cl, byte ptr ss : [esp+0xF]
        mov byte ptr ds : [esi+0x84], cl
        mov byte ptr ds : [esi+0x94], dl
        mov dword ptr ds : [esi+0x98], ebx
        mov dword ptr ds : [esi+0x9C], ebx
        mov dword ptr ds : [esi+0xA0], ebx
        mov byte ptr ds : [esi+0xA4], al
        mov cl, byte ptr ss : [esp+0xF]
        mov dword ptr ds : [esi+0xA8], ebx
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0xB0], ebx
        mov byte ptr ds : [esi+0xB4], cl
        mov dword ptr ds : [esi+0xB8], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        mov dword ptr ds : [esi+0xC0], ebx
        mov dword ptr ds : [esi+0x110], ebx
        mov dword ptr ds : [esi+0x10C], ebx
        mov dword ptr ds : [esi+0x108], ebx
        mov dword ptr ds : [esi+0x100], ebx
        mov dword ptr ds : [esi+0xFC], ebx
        mov dword ptr ds : [esi+0xF8], ebx
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x114], eax
        mov dword ptr ds : [esi+0x104], eax
        mov dword ptr ds : [esi+0xF4], eax
        mov dword ptr ds : [esi+0x120], ebx
        mov dword ptr ds : [esi+0x11C], ebx
        mov dword ptr ds : [esi+0x118], ebx
        mov al, 1
        mov dword ptr ds : [esi], offset public_5e5744
        mov dword ptr ds : [esi+0x7C], ebx
        mov dword ptr ds : [esi+0x80], ebx
        mov byte ptr ds : [esi+0xC4], al
        mov byte ptr ds : [esi+0xD0], bl
        mov dword ptr ds : [esi+0xD4], ebx
        mov byte ptr ds : [esi+0xD8], bl
        mov dword ptr ds : [esi+0xDC], ebx
        mov dword ptr ds : [esi+0xEC], 0x3B83126F
        mov byte ptr ds : [esi+0xF0], al
        mov byte ptr ds : [esi+0xF1], al
        mov edx, dword ptr ds : [public_6156a8]
        mov dword ptr ds : [esi+0xE0], edx
        mov eax, dword ptr ds : [public_6156b0]
        mov dword ptr ds : [esi+0xE8], eax
        mov ecx, dword ptr ds : [public_6156ac]
        mov dword ptr ds : [esi+0xE4], ecx
        push 0x8000
        mov edi, dword ptr ds : [public_5c726c]
        push ebx
        push ebx
        push 2
        push 0x7F85
        push ebx
        call edi
        push 0x8000
        push ebx
        push ebx
        push 2
        push 0x7F84
        push ebx
        mov dword ptr ds : [esi+0x124], eax
        call edi
        mov dword ptr ds : [esi+0x128], eax
        call dword ptr ds : [public_5c7240]
        mov dword ptr ds : [esi+0x12C], eax
        pop edi
        mov byte ptr ds : [esi+0x130], bl
        mov byte ptr ds : [esi+0x131], bl
        mov byte ptr ds : [esi+0x132], bl
        mov dword ptr ds : [esi+0x134], ebx
        mov dword ptr ds : [esi+0x138], ebx
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x597cd0)
    }
}
