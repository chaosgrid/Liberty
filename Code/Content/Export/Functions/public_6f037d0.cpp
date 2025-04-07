#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f02b10);
CLANG_FORWARD_PROC_SYMBOL(public_6f03550);
CLANG_FORWARD_PROC_SYMBOL(public_6f037d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f03980);
CLANG_FORWARD_PROC_SYMBOL(public_6f03da0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6facc62);

#define public_6f0381b _public_6f0381b
#define public_6f03823 _public_6f03823
#define public_6f03829 _public_6f03829
#define public_6f03857 _public_6f03857
#define public_6f03884 _public_6f03884
#define public_6f038a3 _public_6f038a3
#define public_6f038b6 _public_6f038b6
#define public_6f038d0 _public_6f038d0
#define public_6f038e4 _public_6f038e4
#define public_6f038fd _public_6f038fd
#define public_6f03932 _public_6f03932
#define public_6f03934 _public_6f03934
#define public_6f0395a _public_6f0395a
#define public_6f03962 _public_6f03962

PROC_DECLARE(0x6f037d0, internal_6f037d0, public_6f037d0);
extern "C" NAKED register_t __cdecl internal_6f037d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6facc62 @0x6f037d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6facc62
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [esp+0x28]
        push edi
        mov dword ptr ss : [esp+0x14], ebx
        xor edi, edi
        cmp ebx, edi
        mov dword ptr ss : [esp+0x24], edi
        je public_6f03962
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [ebx], eax
        mov cl, byte ptr ds : [esi+4]
        mov byte ptr ds : [ebx+4], cl
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, edi
        jne public_6f0381b
        xor eax, eax
        jmp public_6f03823
        public_6f0381b : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 4
        public_6f03823 : nop
        cmp eax, edi
        jge public_6f03829
        xor eax, eax
        public_6f03829 : nop
        shl eax, 4
        push eax
        call public_6fa912a
        mov dword ptr ds : [ebx+8], eax
        mov ecx, dword ptr ds : [esi+0xC]
        mov esi, dword ptr ds : [esi+8]
        add esp, 4
        cmp esi, ecx
        mov ebp, eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x14], ebp
        je public_6f0395a
        add esi, 4
        mov dword ptr ss : [esp+0x10], esi
        public_6f03857 : nop
        mov dword ptr ss : [esp+0x20], ebp
        cmp ebp, edi
        mov byte ptr ss : [esp+0x2C], 1
        je public_6f03934
        mov dl, byte ptr ds : [esi-4]
        mov byte ptr ss : [ebp], dl
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov eax, dword ptr ds : [esi+4]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        jbe public_6f03884
        or ebx, 0xFFFFFFFF
        public_6f03884 : nop
        lea ecx, ds:[esi-4]
        cmp ebp, ecx
        jne public_6f038a3
        push 0xFFFFFFFF
        push ebx
        mov ecx, ebp
        call public_6f03da0
        push edi
        push edi
        mov ecx, ebp
        call public_6f03da0
        jmp public_6f03934
        public_6f038a3 : nop
        cmp ebx, edi
        jbe public_6f038e4
        cmp ebx, eax
        jne public_6f038e4
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        jne public_6f038b6
        call public_6f03980
        public_6f038b6 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6f038e4
        push 1
        mov ecx, ebp
        call public_6f02b10
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        jne public_6f038d0
        call public_6f03980
        public_6f038d0 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [ebp+8], ecx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+0xC], ecx
        inc byte ptr ds : [eax-1]
        jmp public_6f03934
        public_6f038e4 : nop
        push 1
        push ebx
        mov ecx, ebp
        call public_6f03550
        test al, al
        je public_6f03932
        mov eax, dword ptr ds : [esi]
        test eax, eax
        jne public_6f038fd
        call public_6f03980
        public_6f038fd : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        mov esi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        lea eax, ss:[esp+0x38]
        push eax
        add ecx, ebx
        push ecx
        mov byte ptr ss : [esp+0x40], 0
        mov dword ptr ss : [ebp+8], ebx
        call dword ptr ds : [public_6fb3310]
        mov esi, dword ptr ss : [esp+0x18]
        add esp, 8
        public_6f03932 : nop
        xor edi, edi
        public_6f03934 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add esi, 0x10
        add ebp, 0x10
        lea edx, ds:[esi-4]
        cmp edx, eax
        mov byte ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f03857
        mov ebx, dword ptr ss : [esp+0x34]
        public_6f0395a : nop
        pop esi
        mov dword ptr ds : [ebx+0xC], ebp
        mov dword ptr ds : [ebx+0x10], ebp
        pop ebp
        public_6f03962 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6f037d0)
    }
}

#undef public_6f0381b
#undef public_6f03823
#undef public_6f03829
#undef public_6f03857
#undef public_6f03884
#undef public_6f038a3
#undef public_6f038b6
#undef public_6f038d0
#undef public_6f038e4
#undef public_6f038fd
#undef public_6f03932
#undef public_6f03934
#undef public_6f0395a
#undef public_6f03962
