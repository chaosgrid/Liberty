#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1830);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9f1c);

#define public_6eb187b _public_6eb187b
#define public_6eb1883 _public_6eb1883
#define public_6eb1889 _public_6eb1889
#define public_6eb18a6 _public_6eb18a6
#define public_6eb18ae _public_6eb18ae
#define public_6eb18b8 _public_6eb18b8
#define public_6eb18d4 _public_6eb18d4
#define public_6eb18ea _public_6eb18ea
#define public_6eb18f2 _public_6eb18f2
#define public_6eb1915 _public_6eb1915
#define public_6eb1928 _public_6eb1928
#define public_6eb1933 _public_6eb1933
#define public_6eb1941 _public_6eb1941

PROC_DECLARE(0x6eb1830, internal_6eb1830, public_6eb1830);
extern "C" NAKED register_t __cdecl internal_6eb1830()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9f1c @0x6eb1832*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9f1c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebp
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], 0
        je public_6eb1941
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp], eax
        mov cl, byte ptr ds : [ebx+4]
        mov byte ptr ss : [ebp+4], cl
        mov ecx, dword ptr ds : [ebx+8]
        test ecx, ecx
        push esi
        jne public_6eb187b
        xor eax, eax
        jmp public_6eb1883
        public_6eb187b : nop
        mov eax, dword ptr ds : [ebx+0xC]
        sub eax, ecx
        sar eax, 2
        public_6eb1883 : nop
        test eax, eax
        jge public_6eb1889
        xor eax, eax
        public_6eb1889 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov dword ptr ss : [ebp+8], eax
        mov edx, dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        cmp ecx, edx
        je public_6eb18b8
        public_6eb18a6 : nop
        test eax, eax
        je public_6eb18ae
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        public_6eb18ae : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6eb18a6
        public_6eb18b8 : nop
        mov dword ptr ss : [ebp+0xC], eax
        mov dword ptr ss : [ebp+0x10], eax
        mov al, byte ptr ds : [ebx+0x14]
        mov byte ptr ss : [ebp+0x14], al
        mov eax, dword ptr ds : [ebx+0x18]
        test eax, eax
        mov byte ptr ss : [esp+0x18], 1
        jne public_6eb18d4
        xor edx, edx
        jmp public_6eb18ea
        public_6eb18d4 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6eb18ea : nop
        test edx, edx
        mov eax, edx
        jge public_6eb18f2
        xor eax, eax
        public_6eb18f2 : nop
        lea edx, ds:[eax+eax*4]
        shl edx, 3
        push edx
        call public_6fa912a
        mov dword ptr ss : [ebp+0x18], eax
        mov ecx, dword ptr ds : [ebx+0x1C]
        mov edx, eax
        mov eax, dword ptr ds : [ebx+0x18]
        add esp, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], ecx
        je public_6eb1933
        push edi
        public_6eb1915 : nop
        test edx, edx
        je public_6eb1928
        mov ecx, 0xA
        mov esi, eax
        mov edi, edx
        rep movsd
        mov ecx, dword ptr ss : [esp+0x24]
        public_6eb1928 : nop
        add eax, 0x28
        add edx, 0x28
        cmp eax, ecx
        jne public_6eb1915
        pop edi
        public_6eb1933 : nop
        mov dword ptr ss : [ebp+0x1C], edx
        mov dword ptr ss : [ebp+0x20], edx
        mov eax, dword ptr ds : [ebx+0x24]
        pop esi
        mov dword ptr ss : [ebp+0x24], eax
        pop ebx
        public_6eb1941 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6eb1830)
    }
}

#undef public_6eb187b
#undef public_6eb1883
#undef public_6eb1889
#undef public_6eb18a6
#undef public_6eb18ae
#undef public_6eb18b8
#undef public_6eb18d4
#undef public_6eb18ea
#undef public_6eb18f2
#undef public_6eb1915
#undef public_6eb1928
#undef public_6eb1933
#undef public_6eb1941
