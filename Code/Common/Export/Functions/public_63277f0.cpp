#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63277f0);

PROC_DECLARE(0x63277f0, internal_63277f0, public_63277f0);
extern "C" NAKED register_t __cdecl internal_63277f0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp+4]
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x3C], eax
        push edi
        xor eax, eax
        xor ebx, ebx
        mov ecx, 0xF
        mov edi, esi
        rep stosd
        mov ecx, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dl, byte ptr ss : [ebp+8]
        neg dl
        mov al, 4
        mov byte ptr ds : [esi+0x17], 1
        mov byte ptr ds : [esi+0x18], al
        mov byte ptr ds : [esi+0x19], bl
        mov byte ptr ds : [esi+0x1A], al
        mov byte ptr ds : [esi+0x1B], bl
        sbb edx, edx
        and edx, 0x12C
        add edx, 0x190
        mov dword ptr ds : [esi+0x10], edx
        mov eax, dword ptr ss : [ebp]
        push 0x1F
        push eax
        lea ecx, ds:[esi+0x1C]
        push ecx
        call dword ptr ds : [public_63992e0]
        add esp, 0xC
        mov byte ptr ds : [esi+0x3B], bl
        cmp byte ptr ss : [ebp+9], bl
        setne dl
        mov byte ptr ds : [esi+0x14], dl
        cmp byte ptr ss : [ebp+0xA], bl
        pop edi
        setne al
        mov byte ptr ds : [esi+0x16], bl
        mov byte ptr ds : [esi+0x15], al
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x63277f0)
    }
}
