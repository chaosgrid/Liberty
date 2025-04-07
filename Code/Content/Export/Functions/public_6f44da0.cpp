#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f44da0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46780);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f44dc4 _public_6f44dc4
#define public_6f44de2 _public_6f44de2
#define public_6f44ded _public_6f44ded
#define public_6f44df6 _public_6f44df6
#define public_6f44e01 _public_6f44e01
#define public_6f44e1d _public_6f44e1d
#define public_6f44e34 _public_6f44e34
#define public_6f44e41 _public_6f44e41
#define public_6f44e4c _public_6f44e4c
#define public_6f44e4f _public_6f44e4f
#define public_6f44e67 _public_6f44e67
#define public_6f44e72 _public_6f44e72
#define public_6f44e75 _public_6f44e75
#define public_6f44e8a _public_6f44e8a
#define public_6f44e95 _public_6f44e95
#define public_6f44ea0 _public_6f44ea0
#define public_6f44ea3 _public_6f44ea3
#define public_6f44eb7 _public_6f44eb7
#define public_6f44ec3 _public_6f44ec3
#define public_6f44ecf _public_6f44ecf
#define public_6f44ed2 _public_6f44ed2
#define public_6f44ef0 _public_6f44ef0
#define public_6f44f2f _public_6f44f2f
#define public_6f44f42 _public_6f44f42
#define public_6f44f4d _public_6f44f4d
#define public_6f44f50 _public_6f44f50
#define public_6f44f5b _public_6f44f5b
#define public_6f44f6e _public_6f44f6e
#define public_6f44f95 _public_6f44f95
#define public_6f44faf _public_6f44faf
#define public_6f44fd5 _public_6f44fd5
#define public_6f44fe8 _public_6f44fe8
#define public_6f44ff5 _public_6f44ff5
#define public_6f44ff7 _public_6f44ff7
#define public_6f45002 _public_6f45002
#define public_6f45019 _public_6f45019
#define public_6f45031 _public_6f45031
#define public_6f4503e _public_6f4503e
#define public_6f45040 _public_6f45040
#define public_6f4504c _public_6f4504c
#define public_6f45076 _public_6f45076
#define public_6f4508e _public_6f4508e
#define public_6f4509e _public_6f4509e
#define public_6f450a8 _public_6f450a8
#define public_6f450cb _public_6f450cb
#define public_6f450de _public_6f450de
#define public_6f450e9 _public_6f450e9
#define public_6f450ec _public_6f450ec
#define public_6f450f6 _public_6f450f6
#define public_6f4511f _public_6f4511f
#define public_6f45132 _public_6f45132
#define public_6f4513f _public_6f4513f
#define public_6f45141 _public_6f45141
#define public_6f45144 _public_6f45144
#define public_6f45147 _public_6f45147
#define public_6f4514a _public_6f4514a

PROC_DECLARE(0x6f44da0, internal_6f44da0, public_6f44da0);
extern "C" NAKED register_t __cdecl internal_6f44da0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_6f46780
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f44de2
        mov eax, dword ptr ds : [esi+8]
        public_6f44dc4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f44e67
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f44e75
        public_6f44de2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f44ded
        mov eax, edx
        jmp public_6f44dc4
        public_6f44ded : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        jne public_6f44e01
        public_6f44df6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        je public_6f44df6
        public_6f44e01 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f44dc4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f44e1d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f44e34
        public_6f44e1d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f44e34 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f44e41
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f44e4f
        public_6f44e41 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f44e4c
        mov dword ptr ds : [edx], ecx
        jmp public_6f44e4f
        public_6f44e4c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f44e4f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x18]
        mov dl, byte ptr ds : [ecx+0x18]
        mov byte ptr ds : [ecx+0x18], bl
        mov byte ptr ds : [esi+0x18], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f44ed2
        public_6f44e67 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f44e72
        mov dword ptr ds : [ecx], eax
        jmp public_6f44e75
        public_6f44e72 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f44e75 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f44ea3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f44e8a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f44ea0
        public_6f44e8a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x19]
        test bl, bl
        mov edx, eax
        jne public_6f44ea0
        public_6f44e95 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x19]
        test bl, bl
        je public_6f44e95
        public_6f44ea0 : nop
        mov dword ptr ss : [ebp], edx
        public_6f44ea3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f44ed2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f44eb7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f44ecf
        public_6f44eb7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x19]
        test bl, bl
        mov edx, eax
        jne public_6f44ecf
        public_6f44ec3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x19]
        test bl, bl
        je public_6f44ec3
        public_6f44ecf : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f44ed2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x18]
        mov bl, 1
        cmp dl, bl
        jne public_6f4514a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f45147
        nop 
        public_6f44ef0 : nop
        cmp byte ptr ds : [eax+0x18], bl
        jne public_6f45147
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f44faf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_6f44f5b
        mov byte ptr ds : [ecx+0x18], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f44f2f
        mov dword ptr ds : [esi+4], ecx
        public_6f44f2f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f44f42
        mov dword ptr ds : [esi+4], edx
        jmp public_6f44f50
        public_6f44f42 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f44f4d
        mov dword ptr ds : [esi], edx
        jmp public_6f44f50
        public_6f44f4d : nop
        mov dword ptr ds : [esi+8], edx
        public_6f44f50 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6f44f5b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_6f44f6e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x18], bl
        je public_6f45019
        public_6f44f6e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_6f4504c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x18], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x18], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f44f95
        mov dword ptr ds : [esi+4], ecx
        public_6f44f95 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f45031
        mov dword ptr ds : [esi+4], edx
        jmp public_6f45040
        public_6f44faf : nop
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_6f45002
        mov byte ptr ds : [ecx+0x18], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f44fd5
        mov dword ptr ds : [esi+4], ecx
        public_6f44fd5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f44fe8
        mov dword ptr ds : [esi+4], edx
        jmp public_6f44ff7
        public_6f44fe8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f44ff5
        mov dword ptr ds : [esi+8], edx
        jmp public_6f44ff7
        public_6f44ff5 : nop
        mov dword ptr ds : [esi], edx
        public_6f44ff7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f45002 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_6f450a8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_6f450a8
        public_6f45019 : nop
        mov byte ptr ds : [ecx+0x18], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f44ef0
        jmp public_6f45147
        public_6f45031 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4503e
        mov dword ptr ds : [esi+8], edx
        jmp public_6f45040
        public_6f4503e : nop
        mov dword ptr ds : [esi], edx
        public_6f45040 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f4504c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x18]
        mov byte ptr ds : [ecx+0x18], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x18], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x18], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f45076
        mov dword ptr ds : [esi+4], ecx
        public_6f45076 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4508e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f45144
        public_6f4508e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f4509e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f45144
        public_6f4509e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f45144
        public_6f450a8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_6f450f6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x18], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x18], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f450cb
        mov dword ptr ds : [esi+4], ecx
        public_6f450cb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f450de
        mov dword ptr ds : [esi+4], edx
        jmp public_6f450ec
        public_6f450de : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f450e9
        mov dword ptr ds : [esi], edx
        jmp public_6f450ec
        public_6f450e9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f450ec : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f450f6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x18]
        mov byte ptr ds : [ecx+0x18], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x18], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x18], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4511f
        mov dword ptr ds : [esi+4], ecx
        public_6f4511f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f45132
        mov dword ptr ds : [esi+4], edx
        jmp public_6f45141
        public_6f45132 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4513f
        mov dword ptr ds : [esi+8], edx
        jmp public_6f45141
        public_6f4513f : nop
        mov dword ptr ds : [esi], edx
        public_6f45141 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f45144 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f45147 : nop
        mov byte ptr ds : [eax+0x18], bl
        public_6f4514a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f44da0)
    }
}

#undef public_6f44dc4
#undef public_6f44de2
#undef public_6f44ded
#undef public_6f44df6
#undef public_6f44e01
#undef public_6f44e1d
#undef public_6f44e34
#undef public_6f44e41
#undef public_6f44e4c
#undef public_6f44e4f
#undef public_6f44e67
#undef public_6f44e72
#undef public_6f44e75
#undef public_6f44e8a
#undef public_6f44e95
#undef public_6f44ea0
#undef public_6f44ea3
#undef public_6f44eb7
#undef public_6f44ec3
#undef public_6f44ecf
#undef public_6f44ed2
#undef public_6f44ef0
#undef public_6f44f2f
#undef public_6f44f42
#undef public_6f44f4d
#undef public_6f44f50
#undef public_6f44f5b
#undef public_6f44f6e
#undef public_6f44f95
#undef public_6f44faf
#undef public_6f44fd5
#undef public_6f44fe8
#undef public_6f44ff5
#undef public_6f44ff7
#undef public_6f45002
#undef public_6f45019
#undef public_6f45031
#undef public_6f4503e
#undef public_6f45040
#undef public_6f4504c
#undef public_6f45076
#undef public_6f4508e
#undef public_6f4509e
#undef public_6f450a8
#undef public_6f450cb
#undef public_6f450de
#undef public_6f450e9
#undef public_6f450ec
#undef public_6f450f6
#undef public_6f4511f
#undef public_6f45132
#undef public_6f4513f
#undef public_6f45141
#undef public_6f45144
#undef public_6f45147
#undef public_6f4514a
