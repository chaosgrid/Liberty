#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6f20230);
CLANG_FORWARD_PROC_SYMBOL(public_6f22fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fadf69);

#define public_6f23074 _public_6f23074
#define public_6f2308a _public_6f2308a
#define public_6f23092 _public_6f23092
#define public_6f23098 _public_6f23098
#define public_6f230b7 _public_6f230b7
#define public_6f230c5 _public_6f230c5
#define public_6f230cf _public_6f230cf

PROC_DECLARE(0x6f22fa0, internal_6f22fa0, public_6f22fa0);
extern "C" NAKED register_t __cdecl internal_6f22fa0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fadf69 @0x6f22fa2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fadf69
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        mov ebp, ecx
        push esi
        push edi
        lea esi, ds:[ebx+4]
        lea edi, ss:[ebp+4]
        mov ecx, 0xD
        rep movsd
        mov eax, dword ptr ds : [ebx+0x38]
        mov dword ptr ss : [ebp+0x38], eax
        mov cl, byte ptr ds : [ebx+0x3C]
        lea esi, ss:[ebp+0x3C]
        push 0xC
        mov dword ptr ss : [esp+0x14], ebp
        mov byte ptr ds : [esi], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        add esp, 4
        xor edi, edi
        mov dword ptr ds : [esi+8], edi
        mov ecx, dword ptr ds : [ebx+0x40]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_6ed0230
        mov dl, byte ptr ds : [ebx+0x48]
        mov byte ptr ss : [ebp+0x48], dl
        mov al, byte ptr ds : [ebx+0x49]
        mov byte ptr ss : [ebp+0x49], al
        mov ecx, dword ptr ds : [ebx+0x4C]
        mov dword ptr ss : [ebp+0x4C], ecx
        mov dl, byte ptr ds : [ebx+0x50]
        mov byte ptr ss : [ebp+0x50], dl
        mov eax, dword ptr ds : [ebx+0x54]
        lea esi, ss:[ebp+0x58]
        mov dword ptr ss : [esp+0x24], esi
        mov cl, byte ptr ss : [esp+0x24]
        mov dword ptr ss : [ebp+0x54], eax
        push 0xC
        mov dword ptr ss : [esp+0x20], edi
        mov byte ptr ds : [esi], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], edi
        lea edx, ds:[ebx+0x58]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x20], 1
        call public_6f20230
        mov eax, dword ptr ds : [ebx+0x64]
        mov dword ptr ss : [ebp+0x64], eax
        mov ecx, dword ptr ds : [ebx+0x68]
        cmp ecx, edi
        mov byte ptr ss : [esp+0x1C], 2
        mov dword ptr ss : [ebp+0x68], ecx
        je public_6f23074
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        public_6f23074 : nop
        mov al, byte ptr ds : [ebx+0x6C]
        mov byte ptr ss : [ebp+0x6C], al
        mov ecx, dword ptr ds : [ebx+0x70]
        cmp ecx, edi
        mov byte ptr ss : [esp+0x1C], 3
        jne public_6f2308a
        xor eax, eax
        jmp public_6f23092
        public_6f2308a : nop
        mov eax, dword ptr ds : [ebx+0x74]
        sub eax, ecx
        sar eax, 3
        public_6f23092 : nop
        cmp eax, edi
        jge public_6f23098
        xor eax, eax
        public_6f23098 : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6fa912a
        mov dword ptr ss : [ebp+0x70], eax
        mov edx, dword ptr ds : [ebx+0x74]
        mov ecx, eax
        mov eax, dword ptr ds : [ebx+0x70]
        add esp, 4
        cmp eax, edx
        je public_6f230cf
        public_6f230b7 : nop
        cmp ecx, edi
        je public_6f230c5
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        public_6f230c5 : nop
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6f230b7
        public_6f230cf : nop
        mov dword ptr ss : [ebp+0x74], ecx
        mov dword ptr ss : [ebp+0x78], ecx
        mov edx, dword ptr ds : [ebx+0x7C]
        mov dword ptr ss : [ebp+0x7C], edx
        mov eax, dword ptr ds : [ebx+0x80]
        mov dword ptr ss : [ebp+0x80], eax
        mov ecx, dword ptr ds : [ebx+0x84]
        pop edi
        mov dword ptr ss : [ebp+0x84], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ss : [ebp], offset public_6fb60a8
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f22fa0)
    }
}

#undef public_6f23074
#undef public_6f2308a
#undef public_6f23092
#undef public_6f23098
#undef public_6f230b7
#undef public_6f230c5
#undef public_6f230cf
