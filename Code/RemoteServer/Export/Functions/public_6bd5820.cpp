#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd5820);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a2d5);

#define public_6bd5851 _public_6bd5851
#define public_6bd585a _public_6bd585a
#define public_6bd585c _public_6bd585c
#define public_6bd58bb _public_6bd58bb
#define public_6bd58c0 _public_6bd58c0
#define public_6bd58c7 _public_6bd58c7
#define public_6bd58da _public_6bd58da
#define public_6bd58e3 _public_6bd58e3
#define public_6bd58e7 _public_6bd58e7
#define public_6bd5900 _public_6bd5900
#define public_6bd5911 _public_6bd5911

PROC_DECLARE(0x6bd5820, internal_6bd5820, public_6bd5820);
extern "C" NAKED register_t __cdecl internal_6bd5820()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a2d5 @0x6bd5822*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a2d5
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp], offset public_6c0b7a4
        xor ebx, ebx
        mov dword ptr ss : [esp+0x20], ebx
        xor edi, edi
        public_6bd5851 : nop
        cmp edi, ebx
        jne public_6bd585a
        mov edi, dword ptr ss : [ebp+4]
        jmp public_6bd585c
        public_6bd585a : nop
        mov edi, dword ptr ds : [edi]
        public_6bd585c : nop
        cmp edi, ebx
        je public_6bd58c0
        mov esi, dword ptr ds : [edi+8]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x14], esi
        je public_6bd58bb
        lea ecx, ds:[esi+0x254]
        mov byte ptr ss : [esp+0x20], 3
        call dword ptr ds : [public_6c0b03c]
        lea ecx, ds:[esi+0x248]
        mov byte ptr ss : [esp+0x20], 2
        call dword ptr ds : [public_6c0b0e4]
        push 1
        lea ecx, ds:[esi+0x214]
        mov byte ptr ss : [esp+0x24], 1
        call dword ptr ds : [public_6c0b1ac]
        push 1
        lea ecx, ds:[esi+0x204]
        mov byte ptr ss : [esp+0x24], bl
        call dword ptr ds : [public_6c0b1ac]
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bd58bb : nop
        mov dword ptr ds : [edi+8], ebx
        jmp public_6bd5851
        public_6bd58c0 : nop
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, ebx
        je public_6bd58e7
        public_6bd58c7 : nop
        cmp byte ptr ss : [ebp+0xC], bl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_6bd58da
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [ebp+0x10], eax
        jmp public_6bd58e3
        public_6bd58da : nop
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bd58e3 : nop
        cmp esi, ebx
        jne public_6bd58c7
        public_6bd58e7 : nop
        mov esi, dword ptr ss : [ebp+0x10]
        cmp esi, ebx
        mov dword ptr ss : [ebp], offset public_6c0b7a8
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+4], ebx
        je public_6bd5911
        nop 
        lea esp, ss:[esp]
        public_6bd5900 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        call public_6c09aaa
        add esp, 4
        cmp esi, ebx
        jne public_6bd5900
        public_6bd5911 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ss : [ebp+0x10], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6bd5820)
    }
}

#undef public_6bd5851
#undef public_6bd585a
#undef public_6bd585c
#undef public_6bd58bb
#undef public_6bd58c0
#undef public_6bd58c7
#undef public_6bd58da
#undef public_6bd58e3
#undef public_6bd58e7
#undef public_6bd5900
#undef public_6bd5911
