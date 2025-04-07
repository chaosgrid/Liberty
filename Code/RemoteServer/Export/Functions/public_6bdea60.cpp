#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd5760);
CLANG_FORWARD_PROC_SYMBOL(public_6bdc790);
CLANG_FORWARD_PROC_SYMBOL(public_6bdea60);
CLANG_FORWARD_PROC_SYMBOL(public_6be1270);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a52e);

#define public_6bdea9f _public_6bdea9f
#define public_6bdeaa3 _public_6bdeaa3
#define public_6bdead1 _public_6bdead1
#define public_6bdeaeb _public_6bdeaeb
#define public_6bdeb73 _public_6bdeb73
#define public_6bdeb82 _public_6bdeb82
#define public_6bdeb93 _public_6bdeb93
#define public_6bdeba8 _public_6bdeba8

PROC_DECLARE(0x6bdea60, internal_6bdea60, public_6bdea60);
extern "C" NAKED register_t __cdecl internal_6bdea60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a52e @0x6bdea62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a52e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [ecx], offset public_6c0bc30
        xor ebx, ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov edx, dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        mov dword ptr ss : [esp+0x10], eax
        je public_6bdeb82
        jmp public_6bdeaa3
        public_6bdea9f : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_6bdeaa3 : nop
        mov edi, dword ptr ds : [eax+8]
        cmp edi, ebx
        je public_6bdeb73
        mov dword ptr ss : [esp+0x18], edi
        mov esi, dword ptr ds : [edi+0x274]
        cmp esi, ebx
        mov byte ptr ss : [esp+0x2C], 5
        je public_6bdead1
        mov ecx, esi
        call public_6be1270
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bdead1 : nop
        mov esi, dword ptr ds : [edi+0x278]
        cmp esi, ebx
        je public_6bdeaeb
        mov ecx, esi
        call public_6be1270
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bdeaeb : nop
        mov ebp, dword ptr ds : [edi+0x26C]
        lea esi, ds:[edi+0x268]
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x30], 4
        call dword ptr ds : [public_6c0b068]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6c0b064]
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6c09aaa
        add esp, 4
        lea ecx, ds:[edi+0x264]
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ss : [esp+0x2C], 3
        call public_6bdc790
        push 1
        lea ecx, ds:[edi+0x214]
        mov byte ptr ss : [esp+0x30], 2
        call dword ptr ds : [public_6c0b1ac]
        push 1
        lea ecx, ds:[edi+0x204]
        mov byte ptr ss : [esp+0x30], 1
        call dword ptr ds : [public_6c0b1ac]
        push edi
        call public_6c09aaa
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        public_6bdeb73 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+0x28]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6bdea9f
        public_6bdeb82 : nop
        mov ebp, dword ptr ds : [ecx+0x28]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea edi, ds:[ecx+0x24]
        mov byte ptr ss : [esp+0x2C], bl
        je public_6bdeba8
        public_6bdeb93 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        call public_6bd5760
        cmp esi, ebp
        jne public_6bdeb93
        public_6bdeba8 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6c09aaa
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call public_6bebe40
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6bdea60)
    }
}

#undef public_6bdea9f
#undef public_6bdeaa3
#undef public_6bdead1
#undef public_6bdeaeb
#undef public_6bdeb73
#undef public_6bdeb82
#undef public_6bdeb93
#undef public_6bdeba8
