#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c21c0);
CLANG_FORWARD_PROC_SYMBOL(public_65c2500);
CLANG_FORWARD_PROC_SYMBOL(public_65c4240);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);
CLANG_FORWARD_JUMP_SYMBOL(public_65c6de4);

#define public_65c21ff _public_65c21ff
#define public_65c2228 _public_65c2228
#define public_65c223f _public_65c223f
#define public_65c2250 _public_65c2250
#define public_65c2288 _public_65c2288

PROC_DECLARE(0x65c21c0, internal_65c21c0, public_65c21c0);
extern "C" NAKED register_t __cdecl internal_65c21c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65c6de4 @0x65c21c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65c6de4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ds : [edi], offset public_65c744c
        mov eax, dword ptr ds : [public_65ca1c8]
        xor esi, esi
        cmp eax, edi
        mov dword ptr ss : [esp+0x1C], 2
        jne public_65c21ff
        mov dword ptr ds : [public_65ca1c8], esi
        public_65c21ff : nop
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        je public_65c2228
        mov ecx, dword ptr ds : [eax]
        push 0x8000
        push esi
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+4], esi
        public_65c2228 : nop
        mov al, byte ptr ds : [edi+0x8C]
        test al, al
        je public_65c223f
        call dword ptr ds : [public_65c70e4]
        mov byte ptr ds : [edi+0x8C], 0
        public_65c223f : nop
        mov ebx, dword ptr ds : [edi+0x84]
        mov ebp, dword ptr ds : [ebx]
        cmp ebp, ebx
        mov byte ptr ss : [esp+0x1C], 1
        je public_65c2288
        public_65c2250 : nop
        mov esi, ebp
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov ebp, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        lea ecx, ds:[esi+8]
        call public_65c2500
        push esi
        call public_65c6a60
        mov ecx, dword ptr ds : [edi+0x88]
        add esp, 4
        dec ecx
        cmp ebp, ebx
        mov dword ptr ds : [edi+0x88], ecx
        jne public_65c2250
        xor esi, esi
        public_65c2288 : nop
        mov eax, dword ptr ds : [edi+0x84]
        push eax
        call public_65c6a60
        add esp, 4
        lea ecx, ds:[edi+0x3C]
        mov dword ptr ds : [edi+0x84], esi
        mov dword ptr ds : [edi+0x88], esi
        mov byte ptr ss : [esp+0x1C], 0
        call public_65c4240
        lea ecx, ds:[edi+0x10]
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_65c4240
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x65c21c0)
    }
}

#undef public_65c21ff
#undef public_65c2228
#undef public_65c223f
#undef public_65c2250
#undef public_65c2288
