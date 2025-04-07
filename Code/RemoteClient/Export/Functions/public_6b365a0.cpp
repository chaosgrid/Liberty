#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b44b40);

#define public_6b36640 _public_6b36640
#define public_6b366e0 _public_6b366e0
#define public_6b366f1 _public_6b366f1

PROC_DECLARE(0x6b365a0, internal_6b365a0, public_6b365a0);
extern "C" NAKED register_t __cdecl internal_6b365a0()
{
    __asm
    {
        sub esp, 0x4C
        push ebx
        lea eax, ss:[esp+4]
        push eax
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        push 0x28
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b366f1
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        mov cl, byte ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        mov byte ptr ds : [edx+0x24], cl
        mov edx, dword ptr ds : [eax+0xC]
        mov al, byte ptr ds : [eax+0x10]
        xor ecx, ecx
        cmp al, cl
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov word ptr ss : [esp+0x14], cx
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov dword ptr ss : [esp+0x40], ecx
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x48], ecx
        mov byte ptr ss : [esp+0x4C], cl
        mov byte ptr ss : [esp+0x4D], cl
        jbe public_6b366e0
        push esi
        push edi
        lea esi, ds:[edx+8]
        movzx edi, al
        nop 
        public_6b36640 : nop
        mov eax, dword ptr ds : [esi-8]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [esi-4]
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x18], edx
        mov ax, word ptr ds : [esi+4]
        mov word ptr ss : [esp+0x1C], ax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x20], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x24], edx
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x28], eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x2C], ecx
        mov edx, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x30], edx
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [esp+0x34], eax
        mov ecx, dword ptr ds : [esi+0x30]
        mov dword ptr ss : [esp+0x38], ecx
        mov edx, dword ptr ds : [esi+0x34]
        mov dword ptr ss : [esp+0x3C], edx
        mov eax, dword ptr ds : [esi+0x38]
        mov dword ptr ss : [esp+0x40], eax
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ss : [esp+0x44], ecx
        mov edx, dword ptr ds : [esi+0x28]
        mov dword ptr ss : [esp+0x48], edx
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0x4C], eax
        mov ecx, dword ptr ds : [esi+0x2C]
        mov dword ptr ss : [esp+0x50], ecx
        mov dl, byte ptr ds : [esi+0x3E]
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x54], dl
        mov al, byte ptr ds : [esi+0x3D]
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ss : [esp+0x59], al
        call public_6b44b40
        add esi, 0x48
        dec edi
        jne public_6b36640
        pop edi
        pop esi
        public_6b366e0 : nop
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [ebx]
        push eax
        push ecx
        mov ecx, ebx
        call dword ptr ds : [edx+0x24]
        public_6b366f1 : nop
        pop ebx
        add esp, 0x4C
        ret 8
        UNREACHABLE_TRAP(0x6b365a0)
    }
}

#undef public_6b36640
#undef public_6b366e0
#undef public_6b366f1
