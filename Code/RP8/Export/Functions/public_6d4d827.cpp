#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4d827);

#define public_6d4d866 _public_6d4d866
#define public_6d4d87f _public_6d4d87f
#define public_6d4d890 _public_6d4d890
#define public_6d4d8aa _public_6d4d8aa
#define public_6d4d8b8 _public_6d4d8b8
#define public_6d4d8c0 _public_6d4d8c0
#define public_6d4d8c5 _public_6d4d8c5
#define public_6d4d8cd _public_6d4d8cd
#define public_6d4d8e6 _public_6d4d8e6
#define public_6d4d8f7 _public_6d4d8f7
#define public_6d4d911 _public_6d4d911
#define public_6d4d91f _public_6d4d91f
#define public_6d4d927 _public_6d4d927
#define public_6d4d92d _public_6d4d92d
#define public_6d4d945 _public_6d4d945
#define public_6d4d94f _public_6d4d94f
#define public_6d4d964 _public_6d4d964
#define public_6d4d976 _public_6d4d976
#define public_6d4d97f _public_6d4d97f
#define public_6d4d98f _public_6d4d98f
#define public_6d4d99a _public_6d4d99a
#define public_6d4d9ae _public_6d4d9ae
#define public_6d4d9b8 _public_6d4d9b8
#define public_6d4d9cd _public_6d4d9cd
#define public_6d4d9df _public_6d4d9df
#define public_6d4d9e8 _public_6d4d9e8
#define public_6d4d9f8 _public_6d4d9f8
#define public_6d4da06 _public_6d4da06
#define public_6d4da15 _public_6d4da15
#define public_6d4da2a _public_6d4da2a
#define public_6d4da3b _public_6d4da3b
#define public_6d4da49 _public_6d4da49
#define public_6d4da54 _public_6d4da54
#define public_6d4da61 _public_6d4da61
#define public_6d4da6a _public_6d4da6a
#define public_6d4da75 _public_6d4da75
#define public_6d4da8a _public_6d4da8a
#define public_6d4da9b _public_6d4da9b
#define public_6d4daa9 _public_6d4daa9
#define public_6d4dab4 _public_6d4dab4
#define public_6d4dac1 _public_6d4dac1
#define public_6d4daca _public_6d4daca
#define public_6d4db08 _public_6d4db08
#define public_6d4db22 _public_6d4db22
#define public_6d4db34 _public_6d4db34
#define public_6d4db40 _public_6d4db40
#define public_6d4db49 _public_6d4db49
#define public_6d4db4f _public_6d4db4f
#define public_6d4db50 _public_6d4db50

PROC_DECLARE(0x6d4d827, internal_6d4d827, public_6d4d827);
extern "C" NAKED register_t __cdecl internal_6d4d827()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x28
        mov eax, dword ptr ds : [eax+0x1A4]
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [ebp-0x20], edx
        mov edx, dword ptr ds : [esi+0x10]
        push ebx
        mov dword ptr ss : [ebp-0x24], eax
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, eax
        push edi
        mov edi, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp-0xC], edx
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [ebp-0x18], ecx
        mov dword ptr ss : [ebp-0x10], eax
        mov dword ptr ss : [ebp-0x28], edi
        mov dword ptr ss : [ebp-0x14], edx
        jge public_6d4d92d
        public_6d4d866 : nop
        cmp edi, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-8], edi
        jg public_6d4d8b8
        mov edx, dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ds : [edx+ecx*4]
        mov eax, edi
        shl eax, 5
        add eax, dword ptr ss : [ebp-0xC]
        lea eax, ds:[edx+eax*2]
        public_6d4d87f : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-4], edx
        mov edx, dword ptr ss : [ebp-0x14]
        cmp dword ptr ss : [ebp-0xC], edx
        mov dword ptr ss : [ebp-0x1C], eax
        jg public_6d4d8aa
        public_6d4d890 : nop
        mov edx, dword ptr ss : [ebp-0x1C]
        mov dx, word ptr ds : [edx]
        add dword ptr ss : [ebp-0x1C], 2
        test dx, dx
        jne public_6d4d8c0
        inc dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp-4]
        cmp edx, dword ptr ss : [ebp-0x14]
        jle public_6d4d890
        public_6d4d8aa : nop
        inc dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp-8]
        add eax, 0x40
        cmp edx, dword ptr ss : [ebp-0x20]
        jle public_6d4d87f
        public_6d4d8b8 : nop
        inc ecx
        cmp ecx, dword ptr ss : [ebp-0x10]
        jle public_6d4d866
        jmp public_6d4d8c5
        public_6d4d8c0 : nop
        mov dword ptr ss : [ebp-0x18], ecx
        mov dword ptr ds : [esi], ecx
        public_6d4d8c5 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        cmp ecx, dword ptr ss : [ebp-0x18]
        jle public_6d4d92d
        public_6d4d8cd : nop
        cmp edi, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-8], edi
        jg public_6d4d91f
        mov edx, dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ds : [edx+ecx*4]
        mov eax, edi
        shl eax, 5
        add eax, dword ptr ss : [ebp-0xC]
        lea eax, ds:[edx+eax*2]
        public_6d4d8e6 : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-4], edx
        mov edx, dword ptr ss : [ebp-0x14]
        cmp dword ptr ss : [ebp-0xC], edx
        mov dword ptr ss : [ebp-0x1C], eax
        jg public_6d4d911
        public_6d4d8f7 : nop
        mov edx, dword ptr ss : [ebp-0x1C]
        mov dx, word ptr ds : [edx]
        add dword ptr ss : [ebp-0x1C], 2
        test dx, dx
        jne public_6d4d927
        inc dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp-4]
        cmp edx, dword ptr ss : [ebp-0x14]
        jle public_6d4d8f7
        public_6d4d911 : nop
        inc dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp-8]
        add eax, 0x40
        cmp edx, dword ptr ss : [ebp-0x20]
        jle public_6d4d8e6
        public_6d4d91f : nop
        dec ecx
        cmp ecx, dword ptr ss : [ebp-0x18]
        jge public_6d4d8cd
        jmp public_6d4d92d
        public_6d4d927 : nop
        mov dword ptr ss : [ebp-0x10], ecx
        mov dword ptr ds : [esi+4], ecx
        public_6d4d92d : nop
        mov ebx, dword ptr ss : [ebp-0x20]
        cmp edi, ebx
        jge public_6d4da06
        mov ecx, edi
        shl ecx, 5
        add ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-8], edi
        shl ecx, 1
        public_6d4d945 : nop
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp-0x10]
        cmp edx, eax
        jg public_6d4d97f
        public_6d4d94f : nop
        mov eax, dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ds : [eax+edx*4]
        mov edi, dword ptr ss : [ebp-0xC]
        mov ebx, dword ptr ss : [ebp-0x14]
        add eax, ecx
        cmp edi, ebx
        mov dword ptr ss : [ebp-4], edi
        jg public_6d4d976
        public_6d4d964 : nop
        mov di, word ptr ds : [eax]
        inc eax
        inc eax
        test di, di
        jne public_6d4d98f
        inc dword ptr ss : [ebp-4]
        cmp dword ptr ss : [ebp-4], ebx
        jle public_6d4d964
        public_6d4d976 : nop
        inc edx
        cmp edx, dword ptr ss : [ebp-0x10]
        jle public_6d4d94f
        mov edi, dword ptr ss : [ebp-0x28]
        public_6d4d97f : nop
        inc dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp-8]
        add ecx, 0x40
        cmp eax, dword ptr ss : [ebp-0x20]
        jle public_6d4d945
        jmp public_6d4d99a
        public_6d4d98f : nop
        mov eax, dword ptr ss : [ebp-8]
        mov edi, eax
        mov dword ptr ss : [ebp-0x28], edi
        mov dword ptr ds : [esi+8], eax
        public_6d4d99a : nop
        mov ebx, dword ptr ss : [ebp-0x20]
        cmp ebx, edi
        jle public_6d4da06
        mov ecx, ebx
        shl ecx, 5
        add ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-8], ebx
        shl ecx, 1
        public_6d4d9ae : nop
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp-0x10]
        cmp edx, eax
        jg public_6d4d9e8
        public_6d4d9b8 : nop
        mov eax, dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ds : [eax+edx*4]
        mov edi, dword ptr ss : [ebp-0xC]
        mov ebx, dword ptr ss : [ebp-0x14]
        add eax, ecx
        cmp edi, ebx
        mov dword ptr ss : [ebp-4], edi
        jg public_6d4d9df
        public_6d4d9cd : nop
        mov di, word ptr ds : [eax]
        inc eax
        inc eax
        test di, di
        jne public_6d4d9f8
        inc dword ptr ss : [ebp-4]
        cmp dword ptr ss : [ebp-4], ebx
        jle public_6d4d9cd
        public_6d4d9df : nop
        inc edx
        cmp edx, dword ptr ss : [ebp-0x10]
        jle public_6d4d9b8
        mov edi, dword ptr ss : [ebp-0x28]
        public_6d4d9e8 : nop
        dec dword ptr ss : [ebp-8]
        sub ecx, 0x40
        cmp dword ptr ss : [ebp-8], edi
        jge public_6d4d9ae
        mov ebx, dword ptr ss : [ebp-0x20]
        jmp public_6d4da06
        public_6d4d9f8 : nop
        mov eax, dword ptr ss : [ebp-8]
        mov edi, dword ptr ss : [ebp-0x28]
        mov ebx, eax
        mov dword ptr ss : [ebp-0x20], ebx
        mov dword ptr ds : [esi+0xC], eax
        public_6d4da06 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        cmp eax, dword ptr ss : [ebp-0x14]
        jge public_6d4daca
        mov dword ptr ss : [ebp-4], eax
        public_6d4da15 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        cmp eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x1C], eax
        jg public_6d4da54
        mov ecx, edi
        shl ecx, 5
        add ecx, dword ptr ss : [ebp-4]
        shl ecx, 1
        public_6d4da2a : nop
        mov edx, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ds : [eax+edx*4]
        add eax, ecx
        cmp edi, ebx
        mov edx, edi
        jg public_6d4da49
        public_6d4da3b : nop
        cmp word ptr ds : [eax], 0
        jne public_6d4da61
        inc edx
        add eax, 0x40
        cmp edx, ebx
        jle public_6d4da3b
        public_6d4da49 : nop
        inc dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ss : [ebp-0x1C]
        cmp eax, dword ptr ss : [ebp-0x10]
        jle public_6d4da2a
        public_6d4da54 : nop
        inc dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ss : [ebp-0x14]
        jle public_6d4da15
        jmp public_6d4da6a
        public_6d4da61 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        public_6d4da6a : nop
        mov eax, dword ptr ss : [ebp-0x14]
        cmp eax, dword ptr ss : [ebp-0xC]
        jle public_6d4daca
        mov dword ptr ss : [ebp-4], eax
        public_6d4da75 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        cmp eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x1C], eax
        jg public_6d4dab4
        mov ecx, edi
        shl ecx, 5
        add ecx, dword ptr ss : [ebp-4]
        shl ecx, 1
        public_6d4da8a : nop
        mov edx, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ds : [eax+edx*4]
        add eax, ecx
        cmp edi, ebx
        mov edx, edi
        jg public_6d4daa9
        public_6d4da9b : nop
        cmp word ptr ds : [eax], 0
        jne public_6d4dac1
        inc edx
        add eax, 0x40
        cmp edx, ebx
        jle public_6d4da9b
        public_6d4daa9 : nop
        inc dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ss : [ebp-0x1C]
        cmp eax, dword ptr ss : [ebp-0x10]
        jle public_6d4da8a
        public_6d4dab4 : nop
        dec dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ss : [ebp-0xC]
        jge public_6d4da75
        jmp public_6d4daca
        public_6d4dac1 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x14], eax
        mov dword ptr ds : [esi+0x14], eax
        public_6d4daca : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        sub ecx, dword ptr ss : [ebp-0x18]
        mov edx, ebx
        sub edx, edi
        mov edi, dword ptr ss : [ebp-0x14]
        sub edi, dword ptr ss : [ebp-0xC]
        lea eax, ds:[edx+edx*2]
        mov dword ptr ss : [ebp-4], edi
        shl edi, 3
        shl eax, 2
        mov ebx, edi
        imul ebx, edi
        mov edi, eax
        imul edi, eax
        shl ecx, 4
        mov eax, ecx
        imul eax, ecx
        add ebx, edi
        add ebx, eax
        and dword ptr ss : [ebp-8], 0
        mov eax, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [esi+0x18], ebx
        jmp public_6d4db50
        public_6d4db08 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        cmp ecx, dword ptr ss : [ebp-0x20]
        jg public_6d4db4f
        mov edi, dword ptr ss : [ebp-0x24]
        mov edi, dword ptr ds : [edi+eax*4]
        shl ecx, 5
        add ecx, dword ptr ss : [ebp-0xC]
        lea ecx, ds:[edi+ecx*2]
        lea edi, ds:[edx+1]
        public_6d4db22 : nop
        mov ebx, dword ptr ss : [ebp-0xC]
        cmp ebx, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x1C], ecx
        jg public_6d4db49
        mov ebx, dword ptr ss : [ebp-4]
        inc ebx
        mov dword ptr ss : [ebp-0x18], ebx
        public_6d4db34 : nop
        mov ebx, dword ptr ss : [ebp-0x1C]
        cmp word ptr ds : [ebx], 0
        je public_6d4db40
        inc dword ptr ss : [ebp-8]
        public_6d4db40 : nop
        add dword ptr ss : [ebp-0x1C], 2
        dec dword ptr ss : [ebp-0x18]
        jne public_6d4db34
        public_6d4db49 : nop
        add ecx, 0x40
        dec edi
        jne public_6d4db22
        public_6d4db4f : nop
        inc eax
        public_6d4db50 : nop
        cmp eax, dword ptr ss : [ebp-0x10]
        jle public_6d4db08
        mov eax, dword ptr ss : [ebp-8]
        pop edi
        mov dword ptr ds : [esi+0x1C], eax
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4d827)
    }
}

#undef public_6d4d866
#undef public_6d4d87f
#undef public_6d4d890
#undef public_6d4d8aa
#undef public_6d4d8b8
#undef public_6d4d8c0
#undef public_6d4d8c5
#undef public_6d4d8cd
#undef public_6d4d8e6
#undef public_6d4d8f7
#undef public_6d4d911
#undef public_6d4d91f
#undef public_6d4d927
#undef public_6d4d92d
#undef public_6d4d945
#undef public_6d4d94f
#undef public_6d4d964
#undef public_6d4d976
#undef public_6d4d97f
#undef public_6d4d98f
#undef public_6d4d99a
#undef public_6d4d9ae
#undef public_6d4d9b8
#undef public_6d4d9cd
#undef public_6d4d9df
#undef public_6d4d9e8
#undef public_6d4d9f8
#undef public_6d4da06
#undef public_6d4da15
#undef public_6d4da2a
#undef public_6d4da3b
#undef public_6d4da49
#undef public_6d4da54
#undef public_6d4da61
#undef public_6d4da6a
#undef public_6d4da75
#undef public_6d4da8a
#undef public_6d4da9b
#undef public_6d4daa9
#undef public_6d4dab4
#undef public_6d4dac1
#undef public_6d4daca
#undef public_6d4db08
#undef public_6d4db22
#undef public_6d4db34
#undef public_6d4db40
#undef public_6d4db49
#undef public_6d4db4f
#undef public_6d4db50
