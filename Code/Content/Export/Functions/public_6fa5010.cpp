#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0160);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8910);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f20230);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa5010);
CLANG_FORWARD_PROC_SYMBOL(public_6fa5b30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);

#define public_6fa5068 _public_6fa5068
#define public_6fa508a _public_6fa508a
#define public_6fa50aa _public_6fa50aa
#define public_6fa50f1 _public_6fa50f1
#define public_6fa5182 _public_6fa5182
#define public_6fa5192 _public_6fa5192

PROC_DECLARE(0x6fa5010, internal_6fa5010, public_6fa5010);
extern "C" NAKED register_t __cdecl internal_6fa5010()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov esi, ecx
        lea eax, ds:[edi+8]
        push eax
        lea ecx, ds:[esi+4]
        call public_6ed0160
        mov ecx, dword ptr ds : [edi+0x38]
        lea eax, ds:[edi+0x3C]
        lea ebp, ds:[esi+0x3C]
        cmp ebp, eax
        mov dword ptr ds : [esi+0x38], ecx
        je public_6fa50aa
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, ebp
        call public_6f1df30
        mov ebx, dword ptr ss : [ebp+4]
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ds:[edi+0x3C]
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        mov edx, dword ptr ds : [edi+0x40]
        mov dword ptr ss : [esp+0x14], edx
        je public_6fa508a
        mov ecx, dword ptr ss : [esp+0x20]
        public_6fa5068 : nop
        cmp ecx, edx
        je public_6fa508a
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x20], ecx
        jne public_6fa5068
        public_6fa508a : nop
        push ebx
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebp
        call public_6fa8370
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x20]
        push eax
        push ecx
        push ebx
        mov ecx, ebp
        call public_6ed0230
        public_6fa50aa : nop
        mov dl, byte ptr ds : [edi+0x48]
        mov byte ptr ds : [esi+0x48], dl
        mov al, byte ptr ds : [edi+0x49]
        mov byte ptr ds : [esi+0x49], al
        mov ecx, dword ptr ds : [edi+0x4C]
        mov dword ptr ds : [esi+0x4C], ecx
        mov dl, byte ptr ds : [edi+0x50]
        lea ecx, ds:[edi+0x58]
        mov byte ptr ds : [esi+0x50], dl
        mov eax, dword ptr ds : [edi+0x54]
        push ecx
        lea ecx, ds:[esi+0x58]
        mov dword ptr ds : [esi+0x54], eax
        call public_6f20230
        mov edx, dword ptr ds : [edi+0x64]
        lea ebx, ds:[esi+0x68]
        mov ecx, ebx
        mov dword ptr ds : [esi+0x64], edx
        call public_6f28e10
        mov ecx, dword ptr ds : [edi+0x68]
        test ecx, ecx
        mov dword ptr ds : [ebx], ecx
        je public_6fa50f1
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        public_6fa50f1 : nop
        lea ecx, ds:[edi+0x6C]
        push ecx
        lea ecx, ds:[esi+0x6C]
        call public_6ef8910
        mov edx, dword ptr ds : [edi+0x7C]
        mov dword ptr ds : [esi+0x7C], edx
        mov eax, dword ptr ds : [edi+0x80]
        mov dword ptr ds : [esi+0x80], eax
        mov ecx, dword ptr ds : [edi+0x84]
        mov dword ptr ds : [esi+0x84], ecx
        mov edx, dword ptr ds : [edi+0x88]
        mov dword ptr ds : [esi+0x88], edx
        mov eax, dword ptr ds : [edi+0x8C]
        mov dword ptr ds : [esi+0x8C], eax
        mov ecx, dword ptr ds : [edi+0x90]
        mov dword ptr ds : [esi+0x90], ecx
        mov edx, dword ptr ds : [edi+0x94]
        mov dword ptr ds : [esi+0x94], edx
        mov edx, dword ptr ds : [edi+0x98]
        lea ecx, ds:[edi+0x98]
        lea eax, ds:[esi+0x98]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [ecx+0x30]
        xor ebx, ebx
        test edx, edx
        mov dword ptr ds : [eax+0x30], edx
        jle public_6fa5192
        lea edx, ds:[eax+0x10]
        sub ecx, eax
        public_6fa5182 : nop
        mov ebp, dword ptr ds : [ecx+edx]
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [eax+0x30]
        inc ebx
        add edx, 4
        cmp ebx, ebp
        jl public_6fa5182
        public_6fa5192 : nop
        mov eax, dword ptr ds : [edi+0xCC]
        mov dword ptr ds : [esi+0xCC], eax
        mov ecx, dword ptr ds : [edi+0xD0]
        mov dword ptr ds : [esi+0xD0], ecx
        mov edx, dword ptr ds : [edi+0xD4]
        mov dword ptr ds : [esi+0xD4], edx
        mov eax, dword ptr ds : [edi+0xD8]
        mov dword ptr ds : [esi+0xD8], eax
        mov ecx, dword ptr ds : [edi+0xDC]
        add edi, 0xE0
        mov dword ptr ds : [esi+0xDC], ecx
        push edi
        lea ecx, ds:[esi+0xE0]
        call public_6fa5b30
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6fa5010)
    }
}

#undef public_6fa5068
#undef public_6fa508a
#undef public_6fa50aa
#undef public_6fa50f1
#undef public_6fa5182
#undef public_6fa5192
