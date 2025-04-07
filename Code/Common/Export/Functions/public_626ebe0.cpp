#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_62f03c0);
CLANG_FORWARD_PROC_SYMBOL(public_630cb40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_626ecb0 _public_626ecb0
#define public_626ed02 _public_626ed02
#define public_626ed0a _public_626ed0a
#define public_626ed15 _public_626ed15
#define public_626ed1d _public_626ed1d
#define public_626ed30 _public_626ed30
#define public_626ed42 _public_626ed42
#define public_626ed59 _public_626ed59
#define public_626ed6f _public_626ed6f
#define public_626ed77 _public_626ed77
#define public_626ed7f _public_626ed7f
#define public_626ed87 _public_626ed87
#define public_626ed8f _public_626ed8f
#define public_626eddc _public_626eddc
#define public_626ee01 _public_626ee01
#define public_626ee2a _public_626ee2a

PROC_DECLARE(0x626ebe0, internal_626ebe0, public_626ebe0);
extern "C" NAKED register_t __cdecl internal_626ebe0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        push edi
        mov esi, ecx
        call public_62f03c0
        mov eax, dword ptr ds : [edi+0x5C]
        mov dword ptr ds : [esi+0x5C], eax
        mov cl, byte ptr ds : [edi+0x60]
        mov byte ptr ds : [esi+0x60], cl
        mov edx, dword ptr ds : [edi+0x64]
        mov dword ptr ds : [esi+0x64], edx
        mov eax, dword ptr ds : [edi+0x68]
        mov dword ptr ds : [esi+0x68], eax
        mov cl, byte ptr ds : [edi+0x6C]
        mov byte ptr ds : [esi+0x6C], cl
        mov edx, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x70], edx
        mov eax, dword ptr ds : [edi+0x74]
        mov dword ptr ds : [esi+0x74], eax
        mov ecx, dword ptr ds : [edi+0x78]
        mov dword ptr ds : [esi+0x78], ecx
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
        mov eax, dword ptr ds : [edi+0x98]
        mov dword ptr ds : [esi+0x98], eax
        mov ecx, dword ptr ds : [edi+0x9C]
        mov dword ptr ds : [esi+0x9C], ecx
        mov edx, dword ptr ds : [edi+0xA0]
        mov dword ptr ds : [esi+0xA0], edx
        mov eax, dword ptr ds : [edi+0xA4]
        mov ecx, edi
        mov dword ptr ds : [esi+0xA4], eax
        lea eax, ds:[esi+0xA8]
        sub ecx, esi
        mov edx, 4
        mov edi, edi
        public_626ecb0 : nop
        mov ebx, dword ptr ds : [ecx+eax]
        mov dword ptr ds : [eax], ebx
        add eax, 4
        dec edx
        jne public_626ecb0
        mov cl, byte ptr ds : [edi+0xB8]
        mov byte ptr ds : [esi+0xB8], cl
        mov dl, byte ptr ds : [edi+0xB9]
        mov byte ptr ds : [esi+0xB9], dl
        mov al, byte ptr ds : [edi+0xBA]
        lea ebp, ds:[edi+0xBC]
        lea ebx, ds:[esi+0xBC]
        cmp ebx, ebp
        mov byte ptr ds : [esi+0xBA], al
        je public_626ee2a
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jne public_626ed02
        xor edx, edx
        jmp public_626ed0a
        public_626ed02 : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, eax
        sar edx, 2
        public_626ed0a : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_626ed15
        xor eax, eax
        jmp public_626ed1d
        public_626ed15 : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 2
        public_626ed1d : nop
        cmp edx, eax
        mov eax, dword ptr ss : [esp+0x18]
        ja public_626ed6f
        mov edx, dword ptr ss : [ebp+8]
        cmp eax, edx
        mov dword ptr ss : [esp+0x10], edx
        je public_626ed42
        public_626ed30 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x10]
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_626ed30
        public_626ed42 : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_626ed59
        mov eax, dword ptr ds : [ebx+4]
        xor ebp, ebp
        lea ecx, ds:[eax+ebp*4]
        mov dword ptr ds : [ebx+8], ecx
        jmp public_626ee2a
        public_626ed59 : nop
        mov ebp, dword ptr ss : [ebp+8]
        sub ebp, eax
        mov eax, dword ptr ds : [ebx+4]
        sar ebp, 2
        lea ecx, ds:[eax+ebp*4]
        mov dword ptr ds : [ebx+8], ecx
        jmp public_626ee2a
        public_626ed6f : nop
        test eax, eax
        jne public_626ed77
        xor edx, edx
        jmp public_626ed7f
        public_626ed77 : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, eax
        sar edx, 2
        public_626ed7f : nop
        test ecx, ecx
        jne public_626ed87
        xor eax, eax
        jmp public_626ed8f
        public_626ed87 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        sub eax, ecx
        sar eax, 2
        public_626ed8f : nop
        cmp edx, eax
        ja public_626eddc
        mov ecx, ebx
        call public_626a600
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ebx+4]
        lea eax, ds:[edx+eax*4]
        mov edx, dword ptr ss : [ebp+4]
        push ecx
        push eax
        push edx
        mov dword ptr ss : [esp+0x24], eax
        call public_630cb40
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [esp+0x24]
        add esp, 0xC
        push eax
        push ecx
        push edx
        mov ecx, ebx
        call public_627f7b0
        mov ecx, ebp
        call public_626a600
        mov ecx, dword ptr ds : [ebx+4]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [ebx+8], edx
        jmp public_626ee2a
        public_626eddc : nop
        mov eax, dword ptr ds : [ebx+8]
        push eax
        push ecx
        mov ecx, ebx
        call public_628f050
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6391d5a
        add esp, 4
        mov ecx, ebp
        call public_626a600
        test eax, eax
        jge public_626ee01
        xor eax, eax
        public_626ee01 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push ebp
        mov ecx, ebx
        call public_627f7b0
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        public_626ee2a : nop
        mov al, byte ptr ds : [edi+0xCC]
        mov byte ptr ds : [esi+0xCC], al
        mov ecx, dword ptr ds : [edi+0xD0]
        pop edi
        mov dword ptr ds : [esi+0xD0], ecx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x626ebe0)
    }
}

#undef public_626ecb0
#undef public_626ed02
#undef public_626ed0a
#undef public_626ed15
#undef public_626ed1d
#undef public_626ed30
#undef public_626ed42
#undef public_626ed59
#undef public_626ed6f
#undef public_626ed77
#undef public_626ed7f
#undef public_626ed87
#undef public_626ed8f
#undef public_626eddc
#undef public_626ee01
#undef public_626ee2a
