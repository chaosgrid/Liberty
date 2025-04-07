#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62728a0);
CLANG_FORWARD_PROC_SYMBOL(public_6272990);
CLANG_FORWARD_PROC_SYMBOL(public_6272ae0);
CLANG_FORWARD_PROC_SYMBOL(public_632ca20);

#define public_626fc60 _public_626fc60
#define public_626fc78 _public_626fc78
#define public_626fc96 _public_626fc96
#define public_626fcb2 _public_626fcb2
#define public_626fccb _public_626fccb
#define public_626fcd3 _public_626fcd3
#define public_626fcfd _public_626fcfd
#define public_626fd08 _public_626fd08
#define public_626fd2b _public_626fd2b
#define public_626fd30 _public_626fd30
#define public_626fd56 _public_626fd56
#define public_626fd74 _public_626fd74

PROC_DECLARE(0x626fbc0, internal_626fbc0, public_626fbc0);
extern "C" NAKED register_t __cdecl internal_626fbc0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov cx, word ptr ds : [edi+4]
        mov word ptr ds : [esi+4], cx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], ecx
        mov dl, byte ptr ds : [edi+0x14]
        mov byte ptr ds : [esi+0x14], dl
        mov al, byte ptr ds : [edi+0x15]
        mov byte ptr ds : [esi+0x15], al
        mov cl, byte ptr ds : [edi+0x16]
        mov byte ptr ds : [esi+0x16], cl
        mov edx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], eax
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x20], ecx
        mov dl, byte ptr ds : [edi+0x24]
        mov byte ptr ds : [esi+0x24], dl
        lea eax, ds:[edi+0x28]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x28]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [edi+0x34]
        mov dword ptr ds : [esi+0x34], ecx
        mov edx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [esi+0x38], edx
        mov eax, dword ptr ds : [edi+0x3C]
        mov dword ptr ds : [esi+0x3C], eax
        lea ecx, ds:[edi+0x40]
        lea eax, ds:[esi+0x40]
        cmp eax, ecx
        je public_626fc96
        mov ebp, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebp
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x20], ecx
        je public_626fc78
        lea ebx, ds:[ebx]
        public_626fc60 : nop
        cmp ebx, ecx
        je public_626fc78
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, ebp
        mov ebx, dword ptr ds : [ebx]
        jne public_626fc60
        public_626fc78 : nop
        push ebp
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ds:[esi+0x40]
        call public_62728a0
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push ebx
        push ebp
        lea ecx, ds:[esi+0x40]
        call public_6272ae0
        public_626fc96 : nop
        lea ecx, ds:[edi+0x4C]
        lea eax, ds:[esi+0x4C]
        cmp eax, ecx
        je public_626fd08
        mov ebx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebx
        mov ecx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_626fccb
        public_626fcb2 : nop
        cmp ebp, ecx
        je public_626fccb
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        mov ebp, dword ptr ss : [ebp]
        jne public_626fcb2
        public_626fccb : nop
        cmp eax, ebx
        mov dword ptr ss : [esp+0x20], eax
        je public_626fcfd
        public_626fcd3 : nop
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_632ca20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ds:[esi+0x4C]
        call public_6271cc0
        cmp dword ptr ss : [esp+0x20], ebx
        jne public_626fcd3
        mov ecx, dword ptr ss : [esp+0x10]
        public_626fcfd : nop
        push ecx
        push ebp
        push ebx
        lea ecx, ds:[esi+0x4C]
        call public_6272ae0
        public_626fd08 : nop
        lea ecx, ds:[edi+0x58]
        lea eax, ds:[esi+0x58]
        cmp eax, ecx
        je public_626fd74
        mov ebp, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebp
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x20], ecx
        je public_626fd56
        jmp public_626fd30
        public_626fd2b : nop
        mov ecx, dword ptr ss : [esp+0x20]
        nop 
        public_626fd30 : nop
        cmp ebx, ecx
        je public_626fd56
        lea ecx, ds:[ebx+8]
        mov ebp, dword ptr ds : [ecx]
        lea edx, ds:[eax+8]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], ebp
        mov ecx, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        mov dword ptr ds : [edx+8], ecx
        mov ebx, dword ptr ds : [ebx]
        jne public_626fd2b
        public_626fd56 : nop
        push ebp
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ds:[esi+0x58]
        call public_62728a0
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebx
        push ebp
        lea ecx, ds:[esi+0x58]
        call public_6272990
        public_626fd74 : nop
        mov ecx, dword ptr ds : [edi+0x64]
        mov dword ptr ds : [esi+0x64], ecx
        mov edx, dword ptr ds : [edi+0x68]
        pop edi
        mov dword ptr ds : [esi+0x68], edx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x626fbc0)
    }
}

#undef public_626fc60
#undef public_626fc78
#undef public_626fc96
#undef public_626fcb2
#undef public_626fccb
#undef public_626fcd3
#undef public_626fcfd
#undef public_626fd08
#undef public_626fd2b
#undef public_626fd30
#undef public_626fd56
#undef public_626fd74
