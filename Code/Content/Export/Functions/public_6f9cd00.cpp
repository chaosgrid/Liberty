#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6f9cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6f9cf70);
CLANG_FORWARD_PROC_SYMBOL(public_6f9d010);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa1170);
CLANG_FORWARD_PROC_SYMBOL(public_6fa11c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1988);

#define public_6f9cd65 _public_6f9cd65
#define public_6f9cde0 _public_6f9cde0
#define public_6f9cdfa _public_6f9cdfa
#define public_6f9ce08 _public_6f9ce08
#define public_6f9ce10 _public_6f9ce10
#define public_6f9ce38 _public_6f9ce38
#define public_6f9ce50 _public_6f9ce50
#define public_6f9ce81 _public_6f9ce81
#define public_6f9ceb2 _public_6f9ceb2
#define public_6f9cf42 _public_6f9cf42
#define public_6f9cf54 _public_6f9cf54

PROC_DECLARE(0x6f9cd00, internal_6f9cd00, public_6f9cd00);
extern "C" NAKED register_t __cdecl internal_6f9cd00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1988 @0x6f9cd02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1988
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x18], esi
        mov al, byte ptr ds : [public_6fd3cb4]
        xor ebx, ebx
        test al, 1
        mov dword ptr ss : [esp+0x50], ebx
        jne public_6f9cd65
        or al, 1
        mov byte ptr ds : [public_6fd3cb4], al
        mov al, byte ptr ss : [esp+0x5C]
        push ebx
        push ebx
        mov ecx, offset public_6fd3ca8
        mov byte ptr ds : [public_6fd3ca8], al
        call public_6f93790
/*FIXUP push offset _public_6f9d010 @0x6f9cd4d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f9d010
        mov dword ptr ds : [public_6fd3cac], eax
        mov dword ptr ds : [public_6fd3cb0], ebx
        call public_6fa9162
        add esp, 4
        public_6f9cd65 : nop
        lea edx, ss:[esp+0x5C]
        push edx
        lea eax, ss:[esp+0x20]
        lea ecx, ds:[esi+0x1C]
        push eax
        call public_6f7b0f0
        mov edi, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[edi+0x1C]
        call public_6fa3db0
        test eax, eax
        jne public_6f9cdfa
        lea ecx, ss:[esp+0x13]
        push ecx
        lea ecx, ss:[esp+0x3C]
        call public_6ead6a0
        mov dword ptr ss : [esp+0x34], offset public_6fb7750
        mov esi, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x58], 1
        call public_6fa11c0
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x50], bl
        call public_6eec8d0
        mov ecx, dword ptr ds : [public_6fd3cac]
        mov eax, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [ecx]
        sub eax, 0x14
        cmp esi, ecx
        mov ebx, ecx
        je public_6f9cf54
        lea edi, ds:[eax+4]
        mov edi, edi
        public_6f9cde0 : nop
        mov ecx, dword ptr ds : [edi+8]
        lea eax, ds:[esi+8]
        push eax
        push ecx
        mov ecx, edi
        call public_6fa0ce0
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6f9cde0
        jmp public_6f9cf54
        public_6f9cdfa : nop
        mov ebp, dword ptr ds : [edi+0x20]
        cmp ebp, dword ptr ds : [edi+0x24]
        je public_6f9cf54
        jmp public_6f9ce10
        public_6f9ce08 : nop
        mov esi, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_6f9ce10 : nop
        push ebp
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ds:[esi+0x1C]
        call public_6f7b0f0
        mov esi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x5C]
        mov byte ptr ss : [esp+0x13], bl
        mov eax, dword ptr ds : [esi+0x30]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f9ce38
        mov byte ptr ss : [esp+0x13], 1
        public_6f9ce38 : nop
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x14], ecx
        je public_6f9cf42
        lea esp, ss:[esp]
        public_6f9ce50 : nop
        mov edx, dword ptr ds : [ecx+8]
        add ecx, 8
        lea eax, ss:[esp+0x60]
        push eax
        call dword ptr ds : [edx+8]
        test al, al
        jne public_6f9ce81
        push ebx
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6f68e30
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        jne public_6f9ce50
        jmp public_6f9cf42
        public_6f9ce81 : nop
        mov edx, dword ptr ds : [esi+0xF0]
        cmp edx, ebx
        lea ecx, ds:[esi+0xEC]
        je public_6f9ceb2
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 2
        cmp eax, ebx
        je public_6f9ceb2
        mov edi, dword ptr ds : [ecx+8]
        lea edx, ss:[esp+0x6C]
        push edx
        call public_6eb5f30
        cmp eax, edi
        je public_6f9cf42
        public_6f9ceb2 : nop
        mov eax, dword ptr ds : [public_6fd3cac]
        mov eax, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x13]
        push ecx
        push eax
        lea edx, ss:[esp+0x30]
        push edx
        mov ecx, offset public_6fd3ca8
        call public_6fa1170
        mov edi, offset public_6fbd3f0
        mov dword ptr ss : [esp+0x34], edi
        fld dword ptr ss : [esp+0x64]
        fsub dword ptr ds : [esi+0xE8]
        mov eax, dword ptr ss : [esp+0x6C]
        push eax
        sub esp, 0xC
        fstp dword ptr ss : [esp+0x48]
        lea edx, ss:[esp+0x44]
        fld dword ptr ss : [esp+0x78]
        mov ecx, esp
        fsub dword ptr ds : [esi+0xE4]
        mov dword ptr ss : [esp+0x3C], esp
        push edx
        mov byte ptr ss : [esp+0x64], 2
        fstp dword ptr ss : [esp+0x50]
        call public_6f9cf70
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ss : [esp+0x68]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        call public_6f9cd00
        mov edx, dword ptr ds : [public_6fd3cac]
        mov eax, dword ptr ds : [edx]
        push eax
        lea eax, ss:[esp+0x34]
        push eax
        mov ecx, offset public_6fd3ca8
        call public_6ecfe80
        mov byte ptr ss : [esp+0x50], bl
        mov dword ptr ss : [esp+0x34], edi
        public_6f9cf42 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx+0x24]
        add ebp, 4
        cmp ebp, eax
        jne public_6f9ce08
        public_6f9cf54 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x44
        ret 0x18
        UNREACHABLE_TRAP(0x6f9cd00)
    }
}

#undef public_6f9cd65
#undef public_6f9cde0
#undef public_6f9cdfa
#undef public_6f9ce08
#undef public_6f9ce10
#undef public_6f9ce38
#undef public_6f9ce50
#undef public_6f9ce81
#undef public_6f9ceb2
#undef public_6f9cf42
#undef public_6f9cf54
