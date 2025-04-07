#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef9e50);
CLANG_FORWARD_PROC_SYMBOL(public_6efa740);
CLANG_FORWARD_PROC_SYMBOL(public_6efa7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac6b8);

#define public_6ef9ea7 _public_6ef9ea7
#define public_6ef9ebd _public_6ef9ebd
#define public_6ef9ec5 _public_6ef9ec5
#define public_6ef9ef0 _public_6ef9ef0
#define public_6ef9f0c _public_6ef9f0c
#define public_6ef9f1a _public_6ef9f1a
#define public_6ef9f3f _public_6ef9f3f
#define public_6ef9f47 _public_6ef9f47
#define public_6ef9f4d _public_6ef9f4d
#define public_6ef9f70 _public_6ef9f70
#define public_6ef9f89 _public_6ef9f89
#define public_6ef9f9d _public_6ef9f9d
#define public_6ef9fbb _public_6ef9fbb
#define public_6ef9fc3 _public_6ef9fc3
#define public_6ef9fc9 _public_6ef9fc9
#define public_6ef9fe2 _public_6ef9fe2
#define public_6ef9ff0 _public_6ef9ff0
#define public_6ef9ffa _public_6ef9ffa

PROC_DECLARE(0x6ef9e50, internal_6ef9e50, public_6ef9e50);
extern "C" NAKED register_t __cdecl internal_6ef9e50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac6b8 @0x6ef9e52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac6b8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], eax
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], ecx
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+0x14], edx
        mov al, byte ptr ds : [esi+0x18]
        mov byte ptr ds : [edi+0x18], al
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        mov dword ptr ss : [esp+0xC], edi
        jne public_6ef9ea7
        xor edx, edx
        jmp public_6ef9ebd
        public_6ef9ea7 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6ef9ebd : nop
        test edx, edx
        mov eax, edx
        jge public_6ef9ec5
        xor eax, eax
        public_6ef9ec5 : nop
        push ebx
        lea edx, ds:[eax+eax*4]
        shl edx, 2
        push ebp
        push edx
        call public_6fa912a
        mov dword ptr ds : [edi+0x1C], eax
        mov ecx, dword ptr ds : [esi+0x20]
        mov ebx, dword ptr ds : [esi+0x1C]
        add esp, 4
        cmp ebx, ecx
        mov ebp, eax
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x10], ebp
        je public_6ef9f1a
        lea ecx, ds:[ecx]
        public_6ef9ef0 : nop
        mov dword ptr ss : [esp+0x18], ebp
        test ebp, ebp
        mov dword ptr ss : [esp+0x24], 0
        je public_6ef9f0c
        push ebx
        mov ecx, ebp
        call public_6efa740
        mov ecx, dword ptr ss : [esp+0x2C]
        public_6ef9f0c : nop
        add ebp, 0x14
        add ebx, 0x14
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x10], ebp
        jne public_6ef9ef0
        public_6ef9f1a : nop
        mov dword ptr ds : [edi+0x20], ebp
        mov dword ptr ds : [edi+0x24], ebp
        mov eax, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edi+0x28], eax
        mov cl, byte ptr ds : [esi+0x2C]
        mov byte ptr ds : [edi+0x2C], cl
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        mov dword ptr ss : [esp+0x24], 1
        jne public_6ef9f3f
        xor eax, eax
        jmp public_6ef9f47
        public_6ef9f3f : nop
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 7
        public_6ef9f47 : nop
        test eax, eax
        jge public_6ef9f4d
        xor eax, eax
        public_6ef9f4d : nop
        shl eax, 7
        push eax
        call public_6fa912a
        mov dword ptr ds : [edi+0x30], eax
        mov ecx, dword ptr ds : [esi+0x34]
        mov ebx, dword ptr ds : [esi+0x30]
        add esp, 4
        cmp ebx, ecx
        mov ebp, eax
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x10], ebp
        je public_6ef9f9d
        public_6ef9f70 : nop
        mov dword ptr ss : [esp+0x18], ebp
        test ebp, ebp
        mov byte ptr ss : [esp+0x24], 2
        je public_6ef9f89
        push ebx
        mov ecx, ebp
        call public_6efa7c0
        mov ecx, dword ptr ss : [esp+0x2C]
        public_6ef9f89 : nop
        add ebp, 0x80
        add ebx, 0x80
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x10], ebp
        jne public_6ef9f70
        public_6ef9f9d : nop
        mov dword ptr ds : [edi+0x34], ebp
        mov dword ptr ds : [edi+0x38], ebp
        mov dl, byte ptr ds : [esi+0x3C]
        mov byte ptr ds : [edi+0x3C], dl
        mov ecx, dword ptr ds : [esi+0x40]
        test ecx, ecx
        pop ebp
        mov byte ptr ss : [esp+0x20], 3
        pop ebx
        jne public_6ef9fbb
        xor eax, eax
        jmp public_6ef9fc3
        public_6ef9fbb : nop
        mov eax, dword ptr ds : [esi+0x44]
        sub eax, ecx
        sar eax, 3
        public_6ef9fc3 : nop
        test eax, eax
        jge public_6ef9fc9
        xor eax, eax
        public_6ef9fc9 : nop
        shl eax, 3
        push eax
        call public_6fa912a
        mov dword ptr ds : [edi+0x40], eax
        mov ecx, dword ptr ds : [esi+0x44]
        mov esi, dword ptr ds : [esi+0x40]
        add esp, 4
        cmp esi, ecx
        je public_6ef9ffa
        public_6ef9fe2 : nop
        test eax, eax
        je public_6ef9ff0
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], edx
        public_6ef9ff0 : nop
        add esi, 8
        add eax, 8
        cmp esi, ecx
        jne public_6ef9fe2
        public_6ef9ffa : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+0x44], eax
        mov dword ptr ds : [edi+0x48], eax
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6ef9e50)
    }
}

#undef public_6ef9ea7
#undef public_6ef9ebd
#undef public_6ef9ec5
#undef public_6ef9ef0
#undef public_6ef9f0c
#undef public_6ef9f1a
#undef public_6ef9f3f
#undef public_6ef9f47
#undef public_6ef9f4d
#undef public_6ef9f70
#undef public_6ef9f89
#undef public_6ef9f9d
#undef public_6ef9fbb
#undef public_6ef9fc3
#undef public_6ef9fc9
#undef public_6ef9fe2
#undef public_6ef9ff0
#undef public_6ef9ffa
